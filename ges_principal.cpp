//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "ges_principal.h"
#include "ges_login.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
Tgprincipal *gprincipal;
//---------------------------------------------------------------------------
__fastcall Tgprincipal::Tgprincipal(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall Tgprincipal::Button9Click(TObject *Sender)
{
Close();
}
//---------------------------------------------------------------------------


void __fastcall Tgprincipal::Button17Click(TObject *Sender)
{
// enregistrement des classe

	if ( (esgt->Text != "") & (init_class->Text != "") &(cfc->Text != "") & (clas->Text !="") &(sct->Text !="")& (prp->Text !="") & (s_f->Text !="") ) {


	Query1->SQL->Text="INSERT INTO classes(enseignement,init_class,chef_class,nom_class,delai,ens_principal,serie_filiere,scolarite) VALUES('"+esgt->Text+"','"+init_class->Text+"','"+cfc->Text+"','"+clas->Text+"','"+dl_pay->Date.FormatString("yyyy-mm-dd")+"','"+prp->Text+"','"+s_f->Text+"','"+sct->Text+"' ) ";
	Query1->ExecSQL();


	esgt->Text="";
	init_class->Text="";
	cfc->Text="";
	clas->Text="";
	prp->Text="";
	s_f->Text="";
	sct->Text="";

	TabSheet4->OnShow(this);  // pour actualiser la page
	}
	else{
	ShowMessage("Veillez renseigner toutes les informations avant d'enregistrer");
}
}
//---------------------------------------------------------------------------

void __fastcall Tgprincipal::DBGrid3CellClick(TColumn *Column)
{
if (DBGrid3->SelectedRows->Count>0) {
	AnsiString idpl1="";
	 TDataSet * ligne = DBGrid3 ->DataSource->DataSet;
	 idpl1= ligne ->Fields->Fields[0] -> AsString;

	 k->Text= idpl1  ;

}
}
//---------------------------------------------------------------------------
void __fastcall Tgprincipal::TabSheet4Show(TObject *Sender)
{
//actualisation

Query2->SQL->Text="SELECT * FROM classes Order By id_class ";
	Query2->Open();
	Query2->Active=true;
}
//---------------------------------------------------------------------------

void __fastcall Tgprincipal::Button20Click(TObject *Sender)
{
// modifier dans class

Query1->SQL->Text="UPDATE classes SET enseignement='"+ esgt->Text+"',init_class='"+
init_class->Text+"',chef_class='"+cfc->Text+"',nom_class='"+clas->Text+"',ens_principal='"+
prp->Text+"',serie_filiere='"+s_f->Text+"',scolarite='"+sct->Text+"' WHERE id_class='"+k->Text+"'   ";
Query1->ExecSQL();

	esgt->Text="";
	init_class->Text="";
	cfc->Text="";
	clas->Text="";
	prp->Text="";
	s_f->Text="";
	sct->Text="";

	TabSheet4->OnShow(this);  // pour actualiser la page
}
//---------------------------------------------------------------------------

void __fastcall Tgprincipal::Button19Click(TObject *Sender)
{
if (MessageDlgPos("�tes-vous sure de vouloir supprimer ?", mtConfirmation, mbYesNoCancel, 0, 500, 300, mbYes)== IDYES)
 {
  Query1->SQL->Text=" DELETE FROM classes WHERE id_class='"+k->Text+"' ";
Query1->ExecSQL();
}
		TabSheet4->OnShow(this);  // pour actualiser la page
}
//---------------------------------------------------------------------------

void __fastcall Tgprincipal::Supprimer1Click(TObject *Sender)
{
		// supprimer dans class
   if (MessageDlgPos("�tes-vous sure de vouloir supprimer ?", mtConfirmation, mbYesNoCancel, 0, 500, 300, mbYes)== IDYES)
 {
  Query1->SQL->Text=" DELETE FROM classes WHERE id_class='"+k->Text+"' ";
Query1->ExecSQL();
}
		TabSheet4->OnShow(this);  // pour actualiser la page
}
//---------------------------------------------------------------------------

void __fastcall Tgprincipal::Modifier1Click(TObject *Sender)
{
// pour charger dans classe et modifier

	AnsiString idc1,esgt1,init_class1,cfc1,clas1,prp1,s_f1,sct1;
	TDate dl_pay1;
   if (DBGrid3->SelectedRows->Count>0) {
	 TDataSet * ligne = DBGrid3 ->DataSource->DataSet;
	 idc1= ligne ->Fields->FieldByName("id_class")->AsAnsiString;
	 esgt1= ligne ->Fields->FieldByName("enseignement")->AsAnsiString;
	 init_class1 = ligne ->Fields->FieldByName("init_class")->AsAnsiString;
	 cfc1= ligne ->Fields->FieldByName("chef_class")->AsAnsiString;
	 clas1=  ligne ->Fields->FieldByName("nom_class")->AsAnsiString;
	 prp1= ligne ->Fields->FieldByName("ens_principal")->AsAnsiString;
	 s_f1= ligne ->Fields->FieldByName("serie_filiere")->AsAnsiString;
	 sct1= ligne ->Fields->FieldByName("scolarite")->AsAnsiString;
	 dl_pay1= ligne ->Fields->FieldByName("delai")->AsDateTime;




	  esgt->Text=esgt1;
	init_class->Text=init_class1;
	cfc->Text=cfc1;
	clas->Text=clas1;
	prp->Text=prp1;
	s_f->Text=s_f1;
	sct->Text=sct1;
	dl_pay->Date= dl_pay1;
   }
	Query1->SQL->Text="SELECT * FROM classes WHERE id_class='"+idc1+"'  ";
   Query1->Open();
   Query1->Active=true;
}
//---------------------------------------------------------------------------

void __fastcall Tgprincipal::Button21Click(TObject *Sender)
{
// anuler une action dans class
	esgt->Text="";
	init_class->Text="";
	cfc->Text="";
	clas->Text="";
	prp->Text="";
	s_f->Text="";
	sct->Text="";

	TabSheet4->OnShow(this);  // pour actualiser la page
}
//---------------------------------------------------------------------------


void __fastcall Tgprincipal::TabSheet5Show(TObject *Sender)
{
//-- generation automatique de l'identifiant unique de l'�l�ve

Query3->SQL->Text="SELECT * FROM eleves Order By id_e ";
	Query3->Open();
	Query3->Active=true;


Query3->SQL->Text="SELECT id_e FROM eleves WHERE id_e LIKE '__EL%' Order By id_e ";
Query3->Open();
bool test = Query1->IsEmpty();
if(test)
  {
   TDate date = Now();
   id_e->Text = date.FormatString("YY")+"EL0001";
  }
else
  {
   Query3->Last();
   AnsiString mat = Query3->FieldByName("id_e")->AsString;
   mat = mat.Trim(); mat = mat.SubString(1,2);
   TDate date = Now();
   AnsiString a,num;
   a = date.FormatString("YY");

   if(mat == a)
	 {
		AnsiString code = Query1->FieldByName("id_e")->AsString;
		code = code.Trim(); code = code.SubString(code.Pos("L")+1,code.Length());
		code = code.ToDouble()+1;
		if(code.ToDouble()<=9)
			{
				code="000"+code;
			}
		 else if(code.ToDouble()<=99)
			{
				code="00"+code;
			}
		 else if(code.ToDouble()<=999)
			{
				code="0"+code;
			}
				 id_e -> Text = mat+"EL"+code;
	 }else
	 {
		id_e->Text = a + "EL0001";
	 }

  }
//----

// Code listage auto ComboBox Parent_e
	Query3->SQL->Text= "SELECT nom_pa FROM parents  Order By id_pa";
	Query3->Open();
	parent_e->Clear();
	while(Query3->Eof==false)
	{
	parent_e->Items->Add(Query3->FieldByName("nom_pa")->AsString);
	Query3->Next();
	}
// Code listage auto ComboBox classe_e
	Query3->SQL->Text= "SELECT nom_class FROM classes  Order By id_class";
	Query3->Open();
	classe_e->Clear();
	while(Query3->Eof==false)
	{
	classe_e->Items->Add(Query3->FieldByName("nom_class")->AsString);
	Query3->Next();
	}
}
//---------------------------------------------------------------------------

void __fastcall Tgprincipal::Button3Click(TObject *Sender)
{
// Requ�te de s�lection de l'ID du parent en fonction de son nom pour enregistrement
	Query2->SQL->Text= "SELECT id_pa FROM parents  Order By id_pa";
	Query2->Open();
	String id_pax = Query2->FieldByName("id_pa")->AsString;
// Requ�te de s�lection de l'ID de la classe en fonction de son nom pour enregistrement
	Query2->SQL->Text= "SELECT id_class FROM classes  Order By id_class";
	Query2->Open();
	String id_classx = Query2->FieldByName("id_class")->AsString;

// Insertion des donn�es dans l'entit� eleves de la BD
	Query1 ->SQL->Text =" INSERT INTO eleves (id_e, id_pa, id_class, nom_e, sexe_e, datenais_e, lieunais_e, img_e) VALUES ('"+
	id_e->Text+"','"+id_pax+"','"+id_classx+"','"+nom_e->Text+"','"+sexe_e->Text+"','"+
	date_naiss->Date.FormatString("YYYY-MM-DD")+"','"+lieu_naiss->Text+"','') ";
	Query1->ExecSQL();

//Vidage des champs apr�s enregistrement
	id_e->Text        = "";
	parent_e ->Text   = "";
	classe_e ->Text   = "";
	nom_e ->Text      = "";
	sexe_e ->Text     = "";
	date_naiss ->Date = Now();
	lieu_naiss ->Text = "";

// Actualisation du TabSheet5 pour renouveller l'ID automatiquement
TabSheet5->OnShow(this);

}
//---------------------------------------------------------------------------

void __fastcall Tgprincipal::FormClose(TObject *Sender, TCloseAction &Action)
{
glogin->Close();
}
//---------------------------------------------------------------------------
void __fastcall Tgprincipal::Button25Click(TObject *Sender)
{
// enregistrer une matiere
	if ( (typ_ens->Text != "") & (typ_m->Text != "") &(coef->Text != "") & (ntm->Text !="") &(init_m->Text !="") )
	{


Query1->SQL->Text=" INSERT INTO matieres (id_m,type_ens, type_m, coef, nom_m,init_mat) VALUES ('"+id_mj->Text+"','"+typ_ens->Text+"','"+typ_m->Text+"','"+coef->Text+"','"+ntm->Text+"','"+init_m->Text+"')";
Query1->ExecSQL() ;


id_mj ->Text="";
 typ_ens ->Text="";
 typ_m->Text="";
 coef->Text="";
 ntm->Text="";
 init_m->Text="";

	 TabSheet7->OnShow(this) ;
	}
	else{
	ShowMessage("Veillez renseigner toutes les informations avant d'enregistrer");
}
}
//---------------------------------------------------------------------------


void __fastcall Tgprincipal::TabSheet7Show(TObject *Sender)
{
//actualisation
	Query2->SQL->Text="SELECT * FROM matieres Order By id_m ";
	Query2->Open();
	Query2->Active=true;

	if (id_mj->Text == "")
{
Query2->SQL->Text="SELECT id_m FROM matieres  WHERE id_m LIKE '__MA%' Order By id_m ";
Query2->Open();
bool test= Query2->IsEmpty();
if(test)
  {
   TDate date =Now();
   id_mj->Text=date.FormatString("YY")+"MA001";
  }
else
  {
   Query2->Last();
   AnsiString mat= Query2->FieldByName("id_m")->AsString;
   mat=mat.Trim(); mat = mat.SubString(1,2);
   TDate date=Now();
   AnsiString a,num;
   a=date.FormatString("YY");

   if(mat==a)
	 {
		AnsiString code = Query2->FieldByName("id_m")->AsString;
		code=code.Trim();code=code.SubString(code.Pos("A")+1,code.Length());
		code=code.ToDouble()+1;
		if(code.ToDouble()<=9)
				{
				code="00"+code;
				}
		 else
			{
				  if(code.ToDouble()<=99)

						code="0"+code;
			}
				 id_mj->Text=mat+"MA"+code;
		 }
   else
	  id_mj->Text=a+"MA001";
   }
  }
}
//---------------------------------------------------------------------------

void __fastcall Tgprincipal::DBGrid4CellClick(TColumn *Column)
{
if (DBGrid4->SelectedRows->Count>0) {
	AnsiString idpl1="";
	 TDataSet * ligne = DBGrid4 ->DataSource->DataSet;
	 idpl1= ligne ->Fields->Fields[0] -> AsString;

	 k->Text= idpl1  ;

}
}
//---------------------------------------------------------------------------

void __fastcall Tgprincipal::Button4Click(TObject *Sender)
{
Close();
}
//---------------------------------------------------------------------------

void __fastcall Tgprincipal::Button26Click(TObject *Sender)
{
Close();
}
//---------------------------------------------------------------------------

void __fastcall Tgprincipal::Button55Click(TObject *Sender)
{
Close();
}
//---------------------------------------------------------------------------

void __fastcall Tgprincipal::Button54Click(TObject *Sender)
{
Close();
}
//---------------------------------------------------------------------------

void __fastcall Tgprincipal::Button35Click(TObject *Sender)
{
Close();
}
//---------------------------------------------------------------------------


void __fastcall Tgprincipal::Button28Click(TObject *Sender)
{
Query1->SQL->Text="UPDATE matieres SET id_m='"+ id_mj->Text+"',type_ens='"+
typ_ens->Text+"',type_m='"+typ_m->Text+"',coef='"+coef->Text+"',nom_m='"+
ntm->Text+"',init_mat='"+init_m->Text+"' WHERE matieres ='"+k->Text+"'   ";
Query1->ExecSQL();


typ_ens ->Text="";
 typ_m->Text="";
 coef->Text="";
 ntm->Text="";
 init_m->Text="";

}
//---------------------------------------------------------------------------

void __fastcall Tgprincipal::Button27Click(TObject *Sender)
{
if (MessageDlgPos("�tes-vous sure de vouloir supprimer ?", mtConfirmation, mbYesNoCancel, 0, 500, 300, mbYes)== IDYES)
 {
  Query1->SQL->Text=" DELETE FROM matieres WHERE id_m='"+k->Text+"' ";
Query1->ExecSQL();
}
		TabSheet7->OnShow(this);  // pour actualiser la page
}
//---------------------------------------------------------------------------



void __fastcall Tgprincipal::Supprimer2Click(TObject *Sender)
{
	  if (MessageDlgPos("�tes-vous sure de vouloir supprimer ?", mtConfirmation, mbYesNoCancel, 0, 500, 300, mbYes)== IDYES)
 {
  Query1->SQL->Text=" DELETE FROM matieres WHERE id_m='"+k->Text+"' ";
Query1->ExecSQL();
}
		TabSheet7->OnShow(this);  // pour actualiser la page
}
//---------------------------------------------------------------------------

void __fastcall Tgprincipal::Modifier2Click(TObject *Sender)
{

	AnsiString id_m1,typ_ens1,typ_m1,coef1,nom_m1,init_mat1;
	TDate dl_pay1;
   if (DBGrid4->SelectedRows->Count>0) {
	 TDataSet * ligne = DBGrid4 ->DataSource->DataSet;
	 id_m1= ligne ->Fields->FieldByName("id_m")->AsAnsiString;
	 typ_ens1= ligne ->Fields->FieldByName("type_ens")->AsAnsiString;
	 typ_m1 = ligne ->Fields->FieldByName("type_m")->AsAnsiString;
	 coef1= ligne ->Fields->FieldByName("coef")->AsAnsiString;
	 nom_m1=  ligne ->Fields->FieldByName("nom_m")->AsAnsiString;
	 init_mat1= ligne ->Fields->FieldByName("init_mat")->AsAnsiString;


 typ_ens ->Text=typ_ens1;
 typ_m->Text=typ_m1;
 coef->Text=coef1;
 ntm->Text=nom_m1;
 init_m->Text=init_mat1;


   }
	Query1->SQL->Text="SELECT * FROM matieres WHERE id_m='"+id_m1+"'  ";
   Query1->Open();
   Query1->Active=true;
}
//---------------------------------------------------------------------------

void __fastcall Tgprincipal::DBGrid2CellClick(TColumn *Column)
{
if (DBGrid2->SelectedRows->Count>0) {
	AnsiString idpl1="";
	 TDataSet * ligne = DBGrid2 ->DataSource->DataSet;
	 idpl1= ligne ->Fields->Fields[0] -> AsString;

	 k->Text= idpl1  ;

}
}
//---------------------------------------------------------------------------

void __fastcall Tgprincipal::Button33Click(TObject *Sender)
{
// enregistrer une parents et son contact
	if ( (ntp_pa->Text != "") & (resid->Text != "") &(sexe_pa->Text != "") & (tel_pa->Text !="") )
	{


Query1->SQL->Text=" INSERT INTO parents (nom_pa,resid,sexe_pa) VALUES ('"+ntp_pa->Text+"','"+resid->Text+"','"+sexe_pa->Text+"')";
Query1->ExecSQL() ;
		Query1->SQL->Text=" INSERT INTO contact_pa (cont_pa) VALUES ('"+tel_pa->Text+"')";
		Query1->ExecSQL() ;

ntp_pa  ->Text="";
 resid  ->Text="";
 sexe_pa ->Text="";
 tel_pa ->Text="";


	 TabSheet11->OnShow(this) ;
	}
	else{
	ShowMessage("Veillez renseigner toutes les informations avant d'enregistrer");
}
}
//---------------------------------------------------------------------------

void __fastcall Tgprincipal::Button36Click(TObject *Sender)
{
if (MessageDlgPos("�tes-vous sure de vouloir supprimer ?", mtConfirmation, mbYesNoCancel, 0, 500, 300, mbYes)== IDYES)
 {
  Query1->SQL->Text=" DELETE FROM parents WHERE id_pa='"+k->Text+"' ";
Query1->ExecSQL();
}
		TabSheet11->OnShow(this);  // pour actualiser la page
}
//---------------------------------------------------------------------------

void __fastcall Tgprincipal::Button38Click(TObject *Sender)
{
ntp_pa  ->Text="";
 resid  ->Text="";
 sexe_pa ->Text="";
 tel_pa ->Text="";

}
//---------------------------------------------------------------------------

void __fastcall Tgprincipal::Supprimer3Click(TObject *Sender)
{
if (MessageDlgPos("�tes-vous sure de vouloir supprimer ?", mtConfirmation, mbYesNoCancel, 0, 500, 300, mbYes)== IDYES)
 {
  Query1->SQL->Text=" DELETE FROM parents WHERE id_pa='"+k->Text+"' ";
Query1->ExecSQL();
}
		TabSheet11->OnShow(this);  // pour actualiser la page
}
//---------------------------------------------------------------------------

void __fastcall Tgprincipal::Button37Click(TObject *Sender)
{
// modifier dans parensts

Query1->SQL->Text="UPDATE parents SET nom_pa='"+ ntp_pa->Text+"',resid='"+
resid->Text+"',sexe_pa='"+sexe_pa->Text+"' WHERE id_pa='"+k->Text+"'   ";
Query1->ExecSQL();

Query1->SQL->Text="UPDATE contact_pa SET cont_pa='"+ tel_pa->Text+"' WHERE id_pa='"+k->Text+"'   ";
Query1->ExecSQL();
					  //nom_pa,resid,sexe_pa
	ntp_pa  ->Text="";
 resid  ->Text="";
 sexe_pa ->Text="";
 tel_pa ->Text="";


	TabSheet11->OnShow(this);  // pour actualiser la page
}
//---------------------------------------------------------------------------

void __fastcall Tgprincipal::Modifier3Click(TObject *Sender)
{
		 AnsiString id_pa1,nom_pa1, resid1, sexe_pa1, cont_pa1;
	TDate dl_pay1;
   if (DBGrid4->SelectedRows->Count>0) {
	 TDataSet * ligne = DBGrid4 ->DataSource->DataSet;
	 id_pa1= ligne ->Fields->FieldByName("id_pa")->AsAnsiString;
	 nom_pa1= ligne ->Fields->FieldByName("nom_pa")->AsAnsiString;
	 resid1 = ligne ->Fields->FieldByName("resid")->AsAnsiString;
	 sexe_pa1= ligne ->Fields->FieldByName("sexe_pa")->AsAnsiString;
	 cont_pa1=  ligne ->Fields->FieldByName("cont_pa")->AsAnsiString;


								 //nom_pa,resid,sexe_pa
 ntp_pa  ->Text=nom_pa1;
 resid  ->Text=resid1;
 sexe_pa ->Text=sexe_pa1;
 tel_pa ->Text=cont_pa1;

   }
	Query1->SQL->Text="SELECT * FROM parents WHERE id_pa='"+id_pa1+"'  ";
   Query1->Open();
   Query1->Active=true;
}
//---------------------------------------------------------------------------



