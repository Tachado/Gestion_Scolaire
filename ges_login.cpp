//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "ges_login.h"
#include "ges_principal.h"
#include "ges_demarrage.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
Tglogin *glogin;
bool a =true;
//---------------------------------------------------------------------------
__fastcall Tglogin::Tglogin(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall Tglogin::Button1Click(TObject *Sender)
{
/*
    	//    Vérifier si ce dernier existe belle et bien dans notre BD. Si non afficher message d'erreur
    	gprincipal->Query1->SQL->Text = "SELECT * FROM personnels WHERE nomu = '"+user->Text+"' AND mp = '"+mp->Text+"' ";
    	gprincipal->Query1->Open();
    	bool a = gprincipal->Query1->IsEmpty();

    	if (a == true) {  // si il n'existe pas dans notre base de donnée
    		Label4->Visible = true;
    		Label3->Visible = true;
    	}else{ // Si il existe dans notre BD

    		String nomux  =  gprincipal->Query1->Fields->FieldByName("nomu")->AsString;
    		String iduser =  gprincipal->Query1->Fields->FieldByName("idp")->AsString;
    		String nivacx =  gprincipal->Query1->Fields->FieldByName("nivac")->AsString;

    		gprincipal->utilisateur->Caption = nomux;
    		gprincipal->c_user_id->Text = iduser ; // Connected user id

    	if (nivacx == 1) {
    		gprincipal->Articles1->Enabled=false;
    		gprincipal->Caisses1->Enabled=false;
    		gprincipal->Clients1->Enabled=true;
    		gprincipal->Comliv1->Enabled=true;
    		gprincipal->Fournisseurs1->Enabled=false;
    		gprincipal->Creadettes1->Enabled=true;
    		gprincipal->Personnels2->Enabled=false;
    		gprincipal->Statistiques1->Enabled=true;
    		gprincipal->Ventes1->Enabled=true;
    		gprincipal->Calculatrice1->Enabled=true;
    		gprincipal->Calendrier1->Enabled=true;
    		gprincipal->Donnes1->Enabled=false;
    		gprincipal->Droitsau1->Enabled=false;
    		gprincipal->Horloge1->Enabled=true;
    		gprincipal->Messages1->Enabled=true;
    		gprincipal->Tankc1->Enabled=true;
    		///
    		gprincipal->personnel->Enabled=false;
    		gprincipal->article->Enabled=false;
    		gprincipal->vente->Enabled=true;
    		gprincipal->comliv->Enabled=true;
    		gprincipal->creadette->Enabled=true;
    		gprincipal->four->Enabled=false;
    		gprincipal->caisse->Enabled=false;
    		gprincipal->impression->Enabled=true;
    		gprincipal->pg->Enabled=false;
    		gprincipal->pi->Enabled=true;
    		gprincipal->nivac->Enabled=false;
    		gprincipal->fourpa->Enabled=false;
    		gprincipal->formulescc->Enabled=false;
    		gprincipal->stat->Enabled=true;
    		gprincipal->listing->Enabled=true;
    		gprincipal->previsionv->Enabled=false;

    	}else if (nivacx == 2) {
    		gprincipal->Articles1->Enabled=false;
    		gprincipal->Caisses1->Enabled=true;
    		gprincipal->Clients1->Enabled=false;
    		gprincipal->Comliv1->Enabled=false;
    		gprincipal->Fournisseurs1->Enabled=false;
    		gprincipal->Creadettes1->Enabled=true;
    		gprincipal->Personnels2->Enabled=false;
    		gprincipal->Statistiques1->Enabled=true;
    		gprincipal->Ventes1->Enabled=false;
    		gprincipal->Calculatrice1->Enabled=true;
    		gprincipal->Calendrier1->Enabled=true;
    		gprincipal->Donnes1->Enabled=false;
    		gprincipal->Droitsau1->Enabled=false;
    		gprincipal->Horloge1->Enabled=true;
    		gprincipal->Messages1->Enabled=true;
    		gprincipal->Tankc1->Enabled=true;
    		///
    		gprincipal->personnel->Enabled=false;
    		gprincipal->article->Enabled=false;
    		gprincipal->vente->Enabled=false;
    		gprincipal->comliv->Enabled=false;
    		gprincipal->creadette->Enabled=true;
    		gprincipal->four->Enabled=false;
    		gprincipal->caisse->Enabled=true;
    		gprincipal->impression->Enabled=true;
    		gprincipal->pg->Enabled=false;
    		gprincipal->pi->Enabled=true;
    		gprincipal->nivac->Enabled=false;
    		gprincipal->fourpa->Enabled=false;
    		gprincipal->formulescc->Enabled=false;
    		gprincipal->stat->Enabled=true;
    		gprincipal->listing->Enabled=true;
    		gprincipal->previsionv->Enabled=false;

    		  }else if (nivacx == 3) {  //admin
    				gprincipal->Articles1->Enabled=true;
    				gprincipal->Caisses1->Enabled=true;
    				gprincipal->Clients1->Enabled=true;
    				gprincipal->Comliv1->Enabled=true;
    				gprincipal->Fournisseurs1->Enabled=true;
    				gprincipal->Creadettes1->Enabled=true;
    				gprincipal->Personnels2->Enabled=true;
    				gprincipal->Statistiques1->Enabled=true;
    				gprincipal->Ventes1->Enabled=true;
    				gprincipal->Calculatrice1->Enabled=true;
    				gprincipal->Calendrier1->Enabled=true;
    				gprincipal->Donnes1->Enabled=true;
    				gprincipal->Droitsau1->Enabled=true;
    				gprincipal->Horloge1->Enabled=true;
    				gprincipal->Messages1->Enabled=true;
    				gprincipal->Tankc1->Enabled=true;
    				///
    				gprincipal->personnel->Enabled=true;
    				gprincipal->article->Enabled=true;
    				gprincipal->vente->Enabled=true;
    				gprincipal->comliv->Enabled=true;
    				gprincipal->creadette->Enabled=true;
    				gprincipal->four->Enabled=true;
    				gprincipal->caisse->Enabled=true;
    				gprincipal->impression->Enabled=true;
    				gprincipal->pg->Enabled=true;
    				gprincipal->pi->Enabled=true;
    				gprincipal->nivac->Enabled=true;
    				gprincipal->fourpa->Enabled=true;
    				gprincipal->formulescc->Enabled=true;
    				gprincipal->stat->Enabled=true;
    				gprincipal->listing->Enabled=true;
    				gprincipal->previsionv->Enabled=true;

    				}else{ShowMessage("Un problème a été rencontré");}


			gprincipal->Visible = true;
			glogin->Visible = false;
			user->Text = "";
			mp->Text = "";

    	}




*/

 			gprincipal->Visible = true;
			glogin->Visible = false;
			user->Text = "";
    		mp->Text = "";
}
//---------------------------------------------------------------------------

void __fastcall Tglogin::SpeedButton1Click(TObject *Sender)
{
/*
		if (a == true) {
			mp->PasswordChar=0;
    	}else {
			mp->PasswordChar='*';
		}
		a = !a;
*/
}
//---------------------------------------------------------------------------


void __fastcall Tglogin::SpeedButton1MouseDown(TObject *Sender, TMouseButton Button,
          TShiftState Shift, int X, int Y)
{
	mp->PasswordChar=0;
}
//---------------------------------------------------------------------------


void __fastcall Tglogin::SpeedButton1MouseUp(TObject *Sender, TMouseButton Button,
          TShiftState Shift, int X, int Y)
{
	mp->PasswordChar='*';
}
//---------------------------------------------------------------------------

void __fastcall Tglogin::FormClose(TObject *Sender, TCloseAction &Action)
{
int m = MessageDlgPos("Voulez-vous vraiment quitter l'application ?", mtConfirmation, mbYesNo, 0,500 ,300 , mbYes);
	if ( m == IDYES )
	{
	  gdemarrage->Close();
	}else{
      Action = None;
    }
}
//---------------------------------------------------------------------------

void __fastcall Tglogin::userChange(TObject *Sender)
{
		Label4->Visible = false;
		Label3->Visible = false;
}
//---------------------------------------------------------------------------

void __fastcall Tglogin::mpChange(TObject *Sender)
{
		Label4->Visible = false;
		Label3->Visible = false;
}
//---------------------------------------------------------------------------

void __fastcall Tglogin::FormShow(TObject *Sender)
{
/*
    	// Liste les utilisateurs déjà enregistré
    	gprincipal->Query1->SQL->Text= "SELECT nomu FROM personnels  Order By idp";
    	gprincipal->Query1->Open();
    	user->Items->Clear(); // Efface tous les élements de la liste déroulente pour le renouveller
    	while(gprincipal->Query1->Eof==false)
    	{
    		user->Items->Add(gprincipal->Query1->FieldByName("nomu")->AsString);
    		gprincipal->Query1->Next();
    	}

    	//On teste pour vérifier si le produit est déjà enregistrer ou pas.
    	gprincipal->Query1->SQL->Text= "SELECT etat_lic FROM parametres  Order By idpa";
    	gprincipal->Query1->Open();
    	String etatlicx = gprincipal->Query1->FieldByName("etat_lic")->AsString;
    	if (etatlicx != 1)
    	{
    		// Amenage l'interface pour l'enregistrement du produit
    		Panel2->Width = 349;
    		glogin->Caption = "                                    Enregistrer le Produit";
    	}else{
    		Panel2->Width = 0;
			glogin->Caption = "                                               Identification";
		}
*/
}
//---------------------------------------------------------------------------

void __fastcall Tglogin::Panel2DblClick(TObject *Sender)
{
	// Ferme formulaire clé produit
	Panel2->Width = 0;
	glogin->Caption = "                                               Identification";
}
//---------------------------------------------------------------------------


void __fastcall Tglogin::Button2Click(TObject *Sender)
{
	    /*
        if ((structure->Text != "") & (clef->Text != ""))
        	{
        		if (clef->Text.Length() == 23) { //DSDF1-DFE4D-ZGXW2-AEZ74

        			TDate datedeb = Now();
        			TDate datefin = datedeb + 365;

        			gprincipal->Query1->SQL->Text="INSERT INTO parametres(structure,licence,licence_ref,date_deb,date_ajust,date_fin) VALUES('"+structure->Text+"','"+clef->Text+"','"+clef->Text+"','"+datedeb.FormatString("yyyy-mm-dd")+"','"+datedeb.FormatString("yyyy-mm-dd")+"','"+datefin.FormatString("yyyy-mm-dd")+"')";
        			gprincipal->Query1->ExecSQL();

        			// Ferme formulaire clé produit
        			Panel2->Width = 0;
        			glogin->Caption = "                                               Identification";
        		}else{
        		   ShowMessage("La clé entrée n'est pas valide");
        		}
        	}else{
				ShowMessage("Veuillez entrer toutes les informations demandées !!");
			}
    */
}
//---------------------------------------------------------------------------


void __fastcall Tglogin::Panel1Click(TObject *Sender)
{
/*

    TfrxReport *fichier=new TfrxReport(this);
    TfrxReportPage *page=new TfrxReportPage(fichier);
    page->PaperSize=DMPAPER_A4;// DEFINITION DE LA TAILLE DU FORMAT
    page->Orientation=udHorizontal;  //udVertical
    //int lpapier=gprincipal->cmtopx(21),hpapier=gprincipal->cmtopx(13.5);
    int gauche=gprincipal->cmtopx(1), haut=gprincipal->cmtopx(1), taille=8;
    bool top=true,left=true,gras=true,centre=true,bottom=true,right=true;
    AnsiString police = "Calibri";//Times New Roman, Tahoma,Arial,Calibri
    bool titre=true;
    //int i1;    245
    int n_ligne =8,i=0,n_ligne2=0,n_ligne3=0;
    int c_ligne =1;//compteur de ligne, il met les numeros de ligne devant chaque ligne
    String c_page  ="0";//String du compteur/numero de page (np),  il met les numeros de page sur chaque page
    float hl = 1;//hauteur ligne
    int np =1;//Nbre de page = numéro de page
    String s_ntp = "0";//string du nombre total de page
    float hsd =0.974;//0.724;pr hl =0.75//0.974; pour hl=1 //hauteur sans discontinuté à ajouter pour la ligne suivante 1-0.026(dimension en cm d'un pixel)
    float hdt =11,hdt2=1,hdt3=2;//Hauteur départ tableau
    // Taille Format A4 l=21 cm H=29.7cm
    // 1pixel = 0.026cm<-ok 1/2 Pixel = 0.013cm Pour deplacement sans remarqué discontinuité
    // 2pixel = 0.05cm
    //Limite 20 lignes par fiche



       // Query1->SQL->Text = "SELECT DISTINCT v.idv,v.datev, p.idp, p.nomp, c.idc, c.nomc FROM ventes v, personnels p,articles a,clients c WHERE v.idp=p.idp AND v.ida=a.ida AND v.idc=c.idc AND v.etatv = '1' AND v.datev BETWEEN '"+date1->Date.FormatString("yyyy-mm-dd")+"' and '"+date2->Date.FormatString("yyyy-mm-dd")+"' order by idv";//    ";
       // Query1->Open();          //En mettant l'article dans les paramettre de recherche comme pour une même
        						//vente on peut avoir plusieurs articles différent (distinct) presque toutes
    							//les lignes sont affichées vu que presques tous les articles diff




    //--------
    //Déterminer le nombre de page --ça marche mais voir cmt tester à partir de 8, 16 ,18 puis 25 pour être très précis.
    // si le nbre est déjà > à 16 on a au moins 2 page,on retire ces 16, si le nouveau reste est > 18 et < 25 on a une situation, on retire le nbre
    // si nveau nbre >25 on divise par 25 diviser pour avoir les autres pages // Juste une orientation, pas forcement juste.

    	int npx = ceil (n_ligne/25);//npx est la partie entière correspondant à une parties des pages utilisée
    		s_ntp = s_ntp.ToInt() + npx;
    	int npx2= npx * 25; //pour savoir le nbre de lignes prisent par les pages déterminées par npx
    		npx2 = n_ligne - npx2;  //nbre de lignes restante, nbre ligne départ - nbre ligne occupée par npx

    	 if (npx2 <= 8) {
    	   s_ntp = s_ntp.ToInt() + 1;
    	 }else if (npx2 > 8) {
    	   s_ntp = s_ntp.ToInt() + 2;
    	 }
    //------

    //Première ligne et info sur facture et n° page
    	c_page = np;                                                                                                                                   //taille//posi_h,posi_v,gras,titre,epaiss_ligne,couleur_l
    	gprincipal->ReportText(gprincipal->cmtopx(1.25), gprincipal->cmtopx(0.5), gprincipal->cmtopx(1), gprincipal->cmtopx(17), false, false, bottom, false, "FACTURE  N°F20/0001", police,12, haLeft, vaBottom, gras, false, 3, clSilver ,page);
    						   //distance bas rectangle vers gauche	//distance du haut à hauteur rec//hauteur rectangle      //largeur                                              taille//posi_h,posi_v,gras,titre,epaiss_ligne,couleur_l
    	gprincipal->ReportText(gprincipal->cmtopx(17.5), gprincipal->cmtopx(0.5), gprincipal->cmtopx(1), gprincipal->cmtopx(2.25), false, false, bottom, false, "Page "+c_page+"/"+s_ntp, police, 12, haLeft, vaBottom, gras, false, 3, clSilver , page);
    											 //18.25 initial                                                            //1.75 initial
    //Logo                                                             //dimensio image en pixel ou cm  // Ne prend que photos .jpg//gprincipal->cmtopx(2.5)	gprincipal->cmtopx(6)//"D:\\PROJET MASTER II\\Embarcadero\\GMAO\\logo_cum.jpg"
    	gprincipal->ReportImage(gprincipal->cmtopx(2),gprincipal->cmtopx(2), 185 ,262,false,false,false,false,"D:\\SOCIETES\\Med+\\logos\\CPC_ok.png",taille,centre,page);
    						 // gauche                     //haut      //4.81 en pix et 6.812 //alignH//alignG//alignB//alignD    //emplacement image
    																   //hauteur//Epaisseur
    						// repere bas gaucheA avant height, top=haut apres height, height=hauteur, width=largeur,
    // lieu, date et nom client                                                                                                                                          taille//posi_h,posi_v,gras,titre,epaiss_ligne,couleur_l
    	gprincipal->ReportText(gprincipal->cmtopx(10), gprincipal->cmtopx(2), gprincipal->cmtopx(1), gprincipal->cmtopx(3), top, left, bottom, right, "Lieu et Date", police, 14, haCenter, vaCenter, gras, titre, 1, clBlack , page);
    	gprincipal->ReportText(gprincipal->cmtopx(12.974), gprincipal->cmtopx(2), gprincipal->cmtopx(1), gprincipal->cmtopx(6), top, left, bottom, right, "Client", police, 14, haCenter, vaCenter, gras, titre, 1, clBlack , page);
    	//                                                                                                                                                               taille//posi_h,posi_v,gras,titre,epaiss_ligne,couleur_l
    	gprincipal->ReportText(gprincipal->cmtopx(10), gprincipal->cmtopx(2.974), gprincipal->cmtopx(1), gprincipal->cmtopx(3), top,left,false,right, "Yaoundé,", police, 12, haCenter, vaCenter, false, false, 1, clBlack , page);
    	gprincipal->ReportText(gprincipal->cmtopx(12.974), gprincipal->cmtopx(2.974), gprincipal->cmtopx(1), gprincipal->cmtopx(6), top, left, false, right, "Mr Mon Premier Client son nom complet", police, 12, haCenter, vaCenter, gras, false, 1, clBlack , page);
    	//                                                                                                                                                                       taille//posi_h,posi_v,gras,titre,epaiss_ligne,couleur_l
    	gprincipal->ReportText(gprincipal->cmtopx(10), gprincipal->cmtopx(3.948), gprincipal->cmtopx(1), gprincipal->cmtopx(3), false, left, false, right, "08/04/2020", police, 12, haCenter, vaCenter, false, false, 1, clBlack , page);
    	gprincipal->ReportText(gprincipal->cmtopx(12.974), gprincipal->cmtopx(3.948), gprincipal->cmtopx(1), gprincipal->cmtopx(6), false, left, false, right, "Tel : +237 658-785-448", police, 12, haCenter, vaCenter, gras, false, 1, clBlack , page);
    	//                                                                                                                                                             taille//posi_h,posi_v,gras,titre,epaiss_ligne,couleur_l
    	gprincipal->ReportText(gprincipal->cmtopx(10), gprincipal->cmtopx(4.922), gprincipal->cmtopx(1), gprincipal->cmtopx(3), false, left, false, right, "", police, 12, haCenter, vaCenter, false, false, 1, clBlack , page);
    	gprincipal->ReportText(gprincipal->cmtopx(12.974), gprincipal->cmtopx(4.922), gprincipal->cmtopx(1), gprincipal->cmtopx(6), false, left, false, right, "Yaoundé, Cameroun", police,12, haCenter, vaCenter, gras, false, 1, clBlack , page);
    	//                                                                                                                                                             taille//posi_h,posi_v,gras,titre,epaiss_ligne,couleur_l
    	gprincipal->ReportText(gprincipal->cmtopx(10), gprincipal->cmtopx(5.896), gprincipal->cmtopx(1), gprincipal->cmtopx(3), false, left, bottom, right, "", police, 12, haCenter, vaCenter, false, false, 1, clBlack , page);
    	gprincipal->ReportText(gprincipal->cmtopx(12.974), gprincipal->cmtopx(5.896), gprincipal->cmtopx(1), gprincipal->cmtopx(6), false, left, bottom, right, "", police, 12, haCenter, vaCenter, gras, false, 1, clBlack , page);
    // Facture et numero
    	gprincipal->ReportText(gprincipal->cmtopx(6.5), gprincipal->cmtopx(8.5), gprincipal->cmtopx(1), gprincipal->cmtopx(7.5), false, false, false, false, "FACTURE N°F20/0001", police, 20, haCenter, vaCenter, gras, false, 1, clBlack , page);
    //info
    	gprincipal->ReportText(gprincipal->cmtopx(1.5), gprincipal->cmtopx(10), gprincipal->cmtopx(0.5), gprincipal->cmtopx(18), top, false, bottom, false, "Cette facture fait office de preuve d’achat à présenter pour bénéficier du S.A.V & garantie constructeur", police, 10, haCenter, vaTop, false, false, 2, clSilver , page);

    if (n_ligne <= 8 ) {
    //Tableau entête
    	gprincipal->ReportText(gprincipal->cmtopx(1.5), gprincipal->cmtopx(hdt), gprincipal->cmtopx(1), gprincipal->cmtopx(1), top, left, bottom, right, "N°", police, 14, haCenter, vaTop, gras, titre, 1, clBlack , page);
    	gprincipal->ReportText(gprincipal->cmtopx(2.474), gprincipal->cmtopx(hdt), gprincipal->cmtopx(1), gprincipal->cmtopx(2.5), top, left, bottom, right, "Référence", police, 14, haCenter, vaTop, gras, titre, 1, clBlack , page);
    	gprincipal->ReportText(gprincipal->cmtopx(4.948), gprincipal->cmtopx(hdt), gprincipal->cmtopx(1), gprincipal->cmtopx(5), top, left, bottom, right, "Désignation", police, 14, haCenter, vaTop, gras, titre, 1, clBlack , page);
    	gprincipal->ReportText(gprincipal->cmtopx(9.922), gprincipal->cmtopx(hdt), gprincipal->cmtopx(1), gprincipal->cmtopx(1.75), top, left, bottom, right, "Qté", police, 14, haCenter, vaTop, gras, titre, 1, clBlack , page);
    	gprincipal->ReportText(gprincipal->cmtopx(11.646), gprincipal->cmtopx(hdt), gprincipal->cmtopx(1), gprincipal->cmtopx(2.5), top, left, bottom, right, "P.U", police, 14, haCenter, vaTop, gras, titre, 1, clBlack , page);
    	gprincipal->ReportText(gprincipal->cmtopx(14.12), gprincipal->cmtopx(hdt), gprincipal->cmtopx(1), gprincipal->cmtopx(2), top, left, bottom, right, "R(%)", police, 14, haCenter, vaTop, gras, titre, 1, clBlack , page);
    	gprincipal->ReportText(gprincipal->cmtopx(16.094), gprincipal->cmtopx(hdt), gprincipal->cmtopx(1), gprincipal->cmtopx(3.5), top, left, bottom, right, "P.T", police, 14, haCenter, vaTop, gras, titre, 1, clBlack , page);
    //Tableau corp
    	for (i = 1; i <= n_ligne; i++) {                                                                                                                        //c_ligne: compteur ligne
    		gprincipal->ReportText(gprincipal->cmtopx(1.5), gprincipal->cmtopx(hdt+hsd*i), gprincipal->cmtopx(hl), gprincipal->cmtopx(1), top, left, bottom, right, c_ligne, police, 12, haCenter, vaCenter, false, false, 1, clBlack , page);
    		gprincipal->ReportText(gprincipal->cmtopx(2.474), gprincipal->cmtopx(hdt+hsd*i), gprincipal->cmtopx(hl), gprincipal->cmtopx(2.5), top, left, bottom, right, "REDFXZ", police, 12, haCenter, vaCenter, false, false, 1, clBlack , page);
    		gprincipal->ReportText(gprincipal->cmtopx(4.948), gprincipal->cmtopx(hdt+hsd*i), gprincipal->cmtopx(hl), gprincipal->cmtopx(5), top, left, bottom, right, "Testeur 220V muni  protection statique infaible", police, 12, haCenter, vaCenter, false, false, 1, clBlack , page);
    		gprincipal->ReportText(gprincipal->cmtopx(9.922), gprincipal->cmtopx(hdt+hsd*i), gprincipal->cmtopx(hl), gprincipal->cmtopx(1.75), top, left, bottom, right, "12", police, 12, haCenter, vaCenter, false, false, 1, clBlack , page);
    		gprincipal->ReportText(gprincipal->cmtopx(11.646), gprincipal->cmtopx(hdt+hsd*i), gprincipal->cmtopx(hl), gprincipal->cmtopx(2.5), top, left, bottom, right, "1000", police, 12, haCenter, vaCenter, false, false, 1, clBlack , page);
    		gprincipal->ReportText(gprincipal->cmtopx(14.12), gprincipal->cmtopx(hdt+hsd*i), gprincipal->cmtopx(hl), gprincipal->cmtopx(2), top, left, bottom, right, "0", police, 12, haCenter, vaCenter, false, false, 1, clBlack , page);
    		gprincipal->ReportText(gprincipal->cmtopx(16.094), gprincipal->cmtopx(hdt+hsd*i), gprincipal->cmtopx(hl), gprincipal->cmtopx(3.5), top, left, bottom, right, "12000", police, 12, haCenter, vaCenter, false, false, 1, clBlack , page);
            c_ligne++;
    	   }
    	   c_ligne = 1;
    //Tableau Totaux
    	gprincipal->ReportText(gprincipal->cmtopx(14.12), gprincipal->cmtopx(hdt+hsd*i), gprincipal->cmtopx(hl), gprincipal->cmtopx(2), top, left, bottom, right, "Total HT", police, 13, haCenter, vaCenter, gras, false, 1, clBlack , page);
    	gprincipal->ReportText(gprincipal->cmtopx(16.094), gprincipal->cmtopx(hdt+hsd*i), gprincipal->cmtopx(hl), gprincipal->cmtopx(3.5), top, left, bottom, right, "120 000 000 000", police, 13, haCenter, vaCenter, gras, false, 1, clBlack , page);
    	//
    	i++;
    	gprincipal->ReportText(gprincipal->cmtopx(14.12), gprincipal->cmtopx(hdt+hsd*i), gprincipal->cmtopx(hl), gprincipal->cmtopx(2), top, left, bottom, right, "Total TVA", police, 13, haCenter, vaCenter, gras, false, 1, clBlack , page);
    	gprincipal->ReportText(gprincipal->cmtopx(16.094), gprincipal->cmtopx(hdt+hsd*i), gprincipal->cmtopx(hl), gprincipal->cmtopx(3.5), top, left, bottom, right, "120 000 000 000", police, 13, haCenter, vaCenter, gras, false, 1, clBlack , page);
    	//
    	i++;
    	gprincipal->ReportText(gprincipal->cmtopx(14.12), gprincipal->cmtopx(hdt+hsd*i), gprincipal->cmtopx(hl), gprincipal->cmtopx(2), top, left, bottom, right, "Total TTC", police, 13, haCenter, vaCenter, gras, false, 1, clBlack , page);
    	gprincipal->ReportText(gprincipal->cmtopx(16.094), gprincipal->cmtopx(hdt+hsd*i), gprincipal->cmtopx(hl), gprincipal->cmtopx(3.5), top, left, bottom, right, "120 000 000 000", police, 13, haCenter, vaCenter, gras, false, 1, clBlack , page);
    	i++;
    //Unité facture                                                        //+0.026 * 2 = 0.052cm pr éviter effaçage trait dû au edit dessiné sans bordure
    	gprincipal->ReportText(gprincipal->cmtopx(13.12), gprincipal->cmtopx(hdt+0.052+hsd*i), gprincipal->cmtopx(hl), gprincipal->cmtopx(6.5), false, false, false, false, "Tous nos tarifs sont en « FCFA (XAF)»", police, 11, haCenter, vaTop, gras, false, 1, clBlack , page);
    //Facturation en lettre à la même hauteur que le précédent
    	gprincipal->ReportText(gprincipal->cmtopx(1.5), gprincipal->cmtopx(hdt+hsd*i), gprincipal->cmtopx(hl), gprincipal->cmtopx(10), false, false, false, false, "Arrête la présente facture à la somme de :", police, 12, haLeft, vaBottom, gras, false, 1, clBlack , page);
    	i++;
    	gprincipal->ReportText(gprincipal->cmtopx(1.5), gprincipal->cmtopx(hdt+hsd*i), gprincipal->cmtopx(hl), gprincipal->cmtopx(18), false, false, false, false, "Montant en lettre suivit Unité (ex : FCFA, XAF, €, $)", police, 12, haLeft, vaTop, false, false, 1, clBlack , page);
    	i++;
    //Observation
    	gprincipal->ReportText(gprincipal->cmtopx(1.5), gprincipal->cmtopx(hdt+hsd*i), gprincipal->cmtopx(hl), gprincipal->cmtopx(4), false, false, false, false, "Observation : ", police, 12, haLeft, vaBottom, gras, false, 1, clBlack , page);
    	i++;
    	gprincipal->ReportText(gprincipal->cmtopx(1.5), gprincipal->cmtopx(hdt+hsd*i), gprincipal->cmtopx(hl), gprincipal->cmtopx(18), false, false, false, false, "Nature du règlement,etc. ", police, 12, haLeft, vaTop, false, false, 1, clBlack , page);
    	i++;
    //Dernier niveau
    	gprincipal->ReportText(gprincipal->cmtopx(2.5), gprincipal->cmtopx(hdt+hsd*i), gprincipal->cmtopx(hl), gprincipal->cmtopx(9), false, false, false, false, "Nom structure suivi du service concerné", police, 12, haLeft, vaTop, gras, false, 1, clBlack , page);
    	gprincipal->ReportText(gprincipal->cmtopx(13), gprincipal->cmtopx(hdt+hsd*i), gprincipal->cmtopx(hl), gprincipal->cmtopx(5), false, false, false, false, "Nom client bénéficiaire", police, 12, haLeft, vaTop, gras, false, 1, clBlack , page);
    }
    //-----------
    	else {// n_ligne > 8

    		n_ligne2 = n_ligne;
    		while (n_ligne2 > 0 ) { //!=0

    		if ((np > 1)&(n_ligne2 <= 18)) {
    			// insérer autre page si précédente insuffisante
    				TfrxReportPage *page1=new TfrxReportPage(fichier);
    				page1->PaperSize=DMPAPER_A4;// DEFINITION DE LA TAILLE DU FORMAT
    				page1->Orientation=udHorizontal;

    			//Première ligne et info sur facture et n° page
    				c_page = np;                                                                                                                                        //taille//posi_h,posi_v,gras,titre,epaiss_ligne,couleur_l
    				gprincipal->ReportText(gprincipal->cmtopx(1.25), gprincipal->cmtopx(0.5), gprincipal->cmtopx(1), gprincipal->cmtopx(17), false, false, bottom, false, "FACTURE  N°F20/0001", police,12, haLeft, vaBottom, gras, false, 3, clSilver ,page1);
    									   //distance bas rectangle vers gauche	//distance du haut à hauteur rec//hauteur rectangle      //largeur                                              taille//posi_h,posi_v,gras,titre,epaiss_ligne,couleur_l
    				gprincipal->ReportText(gprincipal->cmtopx(17.5), gprincipal->cmtopx(0.5), gprincipal->cmtopx(1), gprincipal->cmtopx(2.25), false, false, bottom, false, "Page "+c_page+"/"+s_ntp, police, 12, haLeft, vaBottom, gras, false, 3, clSilver , page1);
    														//18.25 initial                                                            //1.75 initial
    			//Tableau corp                                                                                                                                                                                                     // Testeur 220V muni  protection statique infaible
    				for (i = 1; i <= n_ligne2; i++) {                                                                                                                                                                                 // Tole ondulée 3mx2m
    					gprincipal->ReportText(gprincipal->cmtopx(1.5), gprincipal->cmtopx(hdt2+hsd*i), gprincipal->cmtopx(hl), gprincipal->cmtopx(1), top, left, bottom, right, c_ligne, police, 12, haCenter, vaCenter, false, false, 1, clBlack , page1);
    					gprincipal->ReportText(gprincipal->cmtopx(2.474), gprincipal->cmtopx(hdt2+hsd*i), gprincipal->cmtopx(hl), gprincipal->cmtopx(2.5), top, left, bottom, right, "REDFXZ", police, 12, haCenter, vaCenter, false, false, 1, clBlack , page1);
        				gprincipal->ReportText(gprincipal->cmtopx(4.948), gprincipal->cmtopx(hdt2+hsd*i), gprincipal->cmtopx(hl), gprincipal->cmtopx(5), top, left, bottom, right, "Testeur 220V muni  protection statique infaible", police, 12, haCenter, vaCenter, false, false, 1, clBlack , page1);
    					gprincipal->ReportText(gprincipal->cmtopx(9.922), gprincipal->cmtopx(hdt2+hsd*i), gprincipal->cmtopx(hl), gprincipal->cmtopx(1.75), top, left, bottom, right, "12", police, 12, haCenter, vaCenter, false, false, 1, clBlack , page1);
        				gprincipal->ReportText(gprincipal->cmtopx(11.646), gprincipal->cmtopx(hdt2+hsd*i), gprincipal->cmtopx(hl), gprincipal->cmtopx(2.5), top, left, bottom, right, "1000", police, 12, haCenter, vaCenter, false, false, 1, clBlack , page1);
        				gprincipal->ReportText(gprincipal->cmtopx(14.12), gprincipal->cmtopx(hdt2+hsd*i), gprincipal->cmtopx(hl), gprincipal->cmtopx(2), top, left, bottom, right, "0", police, 12, haCenter, vaCenter, false, false, 1, clBlack , page1);
        				gprincipal->ReportText(gprincipal->cmtopx(16.094), gprincipal->cmtopx(hdt2+hsd*i), gprincipal->cmtopx(hl), gprincipal->cmtopx(3.5), top, left, bottom, right, "12000", police, 12, haCenter, vaCenter, false, false, 1, clBlack , page1);
                        c_ligne++;
    				   }
        		//Tableau Totaux
        			gprincipal->ReportText(gprincipal->cmtopx(14.12), gprincipal->cmtopx(hdt2+hsd*i), gprincipal->cmtopx(hl), gprincipal->cmtopx(2), top, left, bottom, right, "Total HT", police, 13, haCenter, vaCenter, gras, false, 1, clBlack , page1);
        			gprincipal->ReportText(gprincipal->cmtopx(16.094), gprincipal->cmtopx(hdt2+hsd*i), gprincipal->cmtopx(hl), gprincipal->cmtopx(3.5), top, left, bottom, right, "120 000 000 000", police, 13, haCenter, vaCenter, gras, false, 1, clBlack , page1);
        			//
    				i++;
        			gprincipal->ReportText(gprincipal->cmtopx(14.12), gprincipal->cmtopx(hdt2+hsd*i), gprincipal->cmtopx(hl), gprincipal->cmtopx(2), top, left, bottom, right, "Total TVA", police, 13, haCenter, vaCenter, gras, false, 1, clBlack , page1);
        			gprincipal->ReportText(gprincipal->cmtopx(16.094), gprincipal->cmtopx(hdt2+hsd*i), gprincipal->cmtopx(hl), gprincipal->cmtopx(3.5), top, left, bottom, right, "120 000 000 000", police, 13, haCenter, vaCenter, gras, false, 1, clBlack , page1);
        			//
        			i++;
    				gprincipal->ReportText(gprincipal->cmtopx(14.12), gprincipal->cmtopx(hdt2+hsd*i), gprincipal->cmtopx(hl), gprincipal->cmtopx(2), top, left, bottom, right, "Total TTC", police, 13, haCenter, vaCenter, gras, false, 1, clBlack , page1);
        			gprincipal->ReportText(gprincipal->cmtopx(16.094), gprincipal->cmtopx(hdt2+hsd*i), gprincipal->cmtopx(hl), gprincipal->cmtopx(3.5), top, left, bottom, right, "120 000 000 000", police, 13, haCenter, vaCenter, gras, false, 1, clBlack , page1);
    				i++;
    			//Unité facture                                                       //+0.026 * 2 = 0.052cm pr éviter effaçage trait dû au edit dessiné sans bordure
    				gprincipal->ReportText(gprincipal->cmtopx(13.12), gprincipal->cmtopx(hdt2+0.052+hsd*i), gprincipal->cmtopx(hl), gprincipal->cmtopx(6.5), false, false, false, false, "Tous nos tarifs sont en « FCFA (XAF)»", police, 11, haCenter, vaTop, gras, false, 1, clBlack , page1);
    			//Facturation en lettre à la même hauteur que le précédent
        			gprincipal->ReportText(gprincipal->cmtopx(1.5), gprincipal->cmtopx(hdt2+hsd*i), gprincipal->cmtopx(hl), gprincipal->cmtopx(10), false, false, false, false, "Arrête la présente facture à la somme de :", police, 12, haLeft, vaBottom, gras, false, 1, clBlack , page1);
    				i++;
        			gprincipal->ReportText(gprincipal->cmtopx(1.5), gprincipal->cmtopx(hdt2+hsd*i), gprincipal->cmtopx(hl), gprincipal->cmtopx(18), false, false, false, false, "Montant en lettre suivit Unité (ex : FCFA, XAF, €, $)", police, 12, haLeft, vaTop, false, false, 1, clBlack , page1);
        			i++;
    			//Observation
        			gprincipal->ReportText(gprincipal->cmtopx(1.5), gprincipal->cmtopx(hdt2+hsd*i), gprincipal->cmtopx(hl), gprincipal->cmtopx(4), false, false, false, false, "Observation : ", police, 12, haLeft, vaBottom, gras, false, 1, clBlack , page1);
        			i++;
        			gprincipal->ReportText(gprincipal->cmtopx(1.5), gprincipal->cmtopx(hdt2+hsd*i), gprincipal->cmtopx(hl), gprincipal->cmtopx(18), false, false, false, false, "Nature du règlement,etc. ", police, 12, haLeft, vaTop, false, false, 1, clBlack , page1);
        			i++;
    			//Dernier niveau
        			gprincipal->ReportText(gprincipal->cmtopx(2.5), gprincipal->cmtopx(hdt2+hsd*i), gprincipal->cmtopx(hl), gprincipal->cmtopx(9), false, false, false, false, "Nom structure suivi du service concerné", police, 12, haLeft, vaTop, gras, false, 1, clBlack , page1);
        			gprincipal->ReportText(gprincipal->cmtopx(13), gprincipal->cmtopx(hdt2+hsd*i), gprincipal->cmtopx(hl), gprincipal->cmtopx(5), false, false, false, false, "Nom client bénéficiaire", police, 12, haLeft, vaTop, gras, false, 1, clBlack , page1);
        			n_ligne2 = 0;

    			}else if((np == 1)){//Numero page np == 1
    				//on utilise la 1ère page  crée pour y mettre notre tableau
    				if (n_ligne2 <= 16){  // nbre ligne <= 16
    					n_ligne3 = n_ligne2 - 1;
    				}else {  //nbre ligne > 16
    					n_ligne3 = 16;// nbre de lignes pouvant tenir sur 1 page avec entête, logo et lieu et date,client
    				}
                    //Tableau entête
    				gprincipal->ReportText(gprincipal->cmtopx(1.5), gprincipal->cmtopx(hdt), gprincipal->cmtopx(1), gprincipal->cmtopx(1), top, left, bottom, right, "N°", police, 14, haCenter, vaTop, gras, titre, 1, clBlack , page);
    				gprincipal->ReportText(gprincipal->cmtopx(2.474), gprincipal->cmtopx(hdt), gprincipal->cmtopx(1), gprincipal->cmtopx(2.5), top, left, bottom, right, "Référence", police, 14, haCenter, vaTop, gras, titre, 1, clBlack , page);
    				gprincipal->ReportText(gprincipal->cmtopx(4.948), gprincipal->cmtopx(hdt), gprincipal->cmtopx(1), gprincipal->cmtopx(5), top, left, bottom, right, "Désignation", police, 14, haCenter, vaTop, gras, titre, 1, clBlack , page);
    				gprincipal->ReportText(gprincipal->cmtopx(9.922), gprincipal->cmtopx(hdt), gprincipal->cmtopx(1), gprincipal->cmtopx(1.75), top, left, bottom, right, "Qté", police, 14, haCenter, vaTop, gras, titre, 1, clBlack , page);
    				gprincipal->ReportText(gprincipal->cmtopx(11.646), gprincipal->cmtopx(hdt), gprincipal->cmtopx(1), gprincipal->cmtopx(2.5), top, left, bottom, right, "P.U", police, 14, haCenter, vaTop, gras, titre, 1, clBlack , page);
    				gprincipal->ReportText(gprincipal->cmtopx(14.12), gprincipal->cmtopx(hdt), gprincipal->cmtopx(1), gprincipal->cmtopx(2), top, left, bottom, right, "R(%)", police, 14, haCenter, vaTop, gras, titre, 1, clBlack , page);
    				gprincipal->ReportText(gprincipal->cmtopx(16.094), gprincipal->cmtopx(hdt), gprincipal->cmtopx(1), gprincipal->cmtopx(3.5), top, left, bottom, right, "P.T", police, 14, haCenter, vaTop, gras, titre, 1, clBlack , page);

    				//Tableau corp
    					for (i = 1; i <= n_ligne3 ; i++) {  //n_ligne2 ici limite nbre ligne sans totaux avec logo,lieu et client
    						gprincipal->ReportText(gprincipal->cmtopx(1.5), gprincipal->cmtopx(hdt+hsd*i), gprincipal->cmtopx(hl), gprincipal->cmtopx(1), top, left, bottom, right, c_ligne, police, 12, haCenter, vaCenter, false, false, 1, clBlack , page);
    						gprincipal->ReportText(gprincipal->cmtopx(2.474), gprincipal->cmtopx(hdt+hsd*i), gprincipal->cmtopx(hl), gprincipal->cmtopx(2.5), top, left, bottom, right, "REDFXZ", police, 12, haCenter, vaCenter, false, false, 1, clBlack , page);
    						gprincipal->ReportText(gprincipal->cmtopx(4.948), gprincipal->cmtopx(hdt+hsd*i), gprincipal->cmtopx(hl), gprincipal->cmtopx(5), top, left, bottom, right, "Testeur 220V muni  protection statique infaible", police, 12, haCenter, vaCenter, false, false, 1, clBlack , page);
    						gprincipal->ReportText(gprincipal->cmtopx(9.922), gprincipal->cmtopx(hdt+hsd*i), gprincipal->cmtopx(hl), gprincipal->cmtopx(1.75), top, left, bottom, right, "12", police, 12, haCenter, vaCenter, false, false, 1, clBlack , page);
    						gprincipal->ReportText(gprincipal->cmtopx(11.646), gprincipal->cmtopx(hdt+hsd*i), gprincipal->cmtopx(hl), gprincipal->cmtopx(2.5), top, left, bottom, right, "1000", police, 12, haCenter, vaCenter, false, false, 1, clBlack , page);
    						gprincipal->ReportText(gprincipal->cmtopx(14.12), gprincipal->cmtopx(hdt+hsd*i), gprincipal->cmtopx(hl), gprincipal->cmtopx(2), top, left, bottom, right, "0", police, 12, haCenter, vaCenter, false, false, 1, clBlack , page);
    						gprincipal->ReportText(gprincipal->cmtopx(16.094), gprincipal->cmtopx(hdt+hsd*i), gprincipal->cmtopx(hl), gprincipal->cmtopx(3.5), top, left, bottom, right, "12000", police, 12, haCenter, vaCenter, false, false, 1, clBlack , page);
    						c_ligne++;
    					   }

    				if (n_ligne2 <= 16){  // nbre ligne <= 16
    					n_ligne2 = n_ligne2 - n_ligne2 + 1;//on laisse une ligne pour afficher à la page suivante
    				}else {  //nbre ligne > 16
    					n_ligne2 = n_ligne2 - 16; //on retire le nombre de ligne dessinnée
    				}
    				np++;
    				n_ligne3=0;
    						   // np!=1
    				}else if ((np > 1) & (n_ligne2 > 18)){ //Numero page np > 1 et nbre ligne 18///------------

    					if (n_ligne2 <= 25){  // nbre ligne <= 25
    						n_ligne3 = n_ligne2 - 1;//on laisse une ligne pour afficher à la page suivante
    					}else {  //nbre ligne > 25
    						n_ligne3 = 25; // nbre de lignes pouvant tenir sur 1 page avec entête, sans logo, lieu date, client
    					}

    				// insérer autre page si précédente insuffisante
    					TfrxReportPage *page1=new TfrxReportPage(fichier);
        				page1->PaperSize=DMPAPER_A4;// DEFINITION DE LA TAILLE DU FORMAT
    					page1->Orientation=udHorizontal;
    				//Première ligne et info sur facture et n° page                                                                                                                                        taille//posi_h,posi_v,gras,titre,epaiss_ligne,couleur_l
                        c_page = np;
    					gprincipal->ReportText(gprincipal->cmtopx(1.25), gprincipal->cmtopx(0.5), gprincipal->cmtopx(1), gprincipal->cmtopx(17), false, false, bottom, false, "FACTURE  N°F20/0001", police,12, haLeft, vaBottom, gras, false, 3, clSilver ,page1);
    										   //distance bas rectangle vers gauche	//distance du haut à hauteur rec//hauteur rectangle      //largeur                                              taille//posi_h,posi_v,gras,titre,epaiss_ligne,couleur_l
    					gprincipal->ReportText(gprincipal->cmtopx(17.5), gprincipal->cmtopx(0.5), gprincipal->cmtopx(1), gprincipal->cmtopx(2.25), false, false, bottom, false, "Page "+c_page+"/"+s_ntp, police, 12, haLeft, vaBottom, gras, false, 3, clSilver , page1);
    				//Tableau entête                             //18.25 initial                                                            //1.75 initial
    					gprincipal->ReportText(gprincipal->cmtopx(1.5), gprincipal->cmtopx(hdt3), gprincipal->cmtopx(1), gprincipal->cmtopx(1), top, left, bottom, right, "N°", police, 14, haCenter, vaTop, gras, titre, 1, clBlack , page1);
    					gprincipal->ReportText(gprincipal->cmtopx(2.474), gprincipal->cmtopx(hdt3), gprincipal->cmtopx(1), gprincipal->cmtopx(2.5), top, left, bottom, right, "Référence", police, 14, haCenter, vaTop, gras, titre, 1, clBlack , page1);
    					gprincipal->ReportText(gprincipal->cmtopx(4.948), gprincipal->cmtopx(hdt3), gprincipal->cmtopx(1), gprincipal->cmtopx(5), top, left, bottom, right, "Désignation", police, 14, haCenter, vaTop, gras, titre, 1, clBlack , page1);
    					gprincipal->ReportText(gprincipal->cmtopx(9.922), gprincipal->cmtopx(hdt3), gprincipal->cmtopx(1), gprincipal->cmtopx(1.75), top, left, bottom, right, "Qté", police, 14, haCenter, vaTop, gras, titre, 1, clBlack , page1);
    					gprincipal->ReportText(gprincipal->cmtopx(11.646), gprincipal->cmtopx(hdt3), gprincipal->cmtopx(1), gprincipal->cmtopx(2.5), top, left, bottom, right, "P.U", police, 14, haCenter, vaTop, gras, titre, 1, clBlack , page1);
    					gprincipal->ReportText(gprincipal->cmtopx(14.12), gprincipal->cmtopx(hdt3), gprincipal->cmtopx(1), gprincipal->cmtopx(2), top, left, bottom, right, "R(%)", police, 14, haCenter, vaTop, gras, titre, 1, clBlack , page1);
    					gprincipal->ReportText(gprincipal->cmtopx(16.094), gprincipal->cmtopx(hdt3), gprincipal->cmtopx(1), gprincipal->cmtopx(3.5), top, left, bottom, right, "P.T", police, 14, haCenter, vaTop, gras, titre, 1, clBlack , page1);
    				//Tableau corp                                                                                                                                                                                                     // Testeur 220V muni  protection statique infaible
    					for (i = 1; i <= n_ligne3 ; i++) {  //n_ligne2 ici limite nbre ligne sans totaux et sans logo,lieu et client                                                                                                                                                                                 // Tole ondulée 3mx2m
    						gprincipal->ReportText(gprincipal->cmtopx(1.5), gprincipal->cmtopx(hdt3+hsd*i), gprincipal->cmtopx(hl), gprincipal->cmtopx(1), top, left, bottom, right, c_ligne, police, 12, haCenter, vaCenter, false, false, 1, clBlack , page1);
    						gprincipal->ReportText(gprincipal->cmtopx(2.474), gprincipal->cmtopx(hdt3+hsd*i), gprincipal->cmtopx(hl), gprincipal->cmtopx(2.5), top, left, bottom, right, "REDFXZ", police, 12, haCenter, vaCenter, false, false, 1, clBlack , page1);
    						gprincipal->ReportText(gprincipal->cmtopx(4.948), gprincipal->cmtopx(hdt3+hsd*i), gprincipal->cmtopx(hl), gprincipal->cmtopx(5), top, left, bottom, right, "Testeur 220V muni  protection statique infaible", police, 12, haCenter, vaCenter, false, false, 1, clBlack , page1);
    						gprincipal->ReportText(gprincipal->cmtopx(9.922), gprincipal->cmtopx(hdt3+hsd*i), gprincipal->cmtopx(hl), gprincipal->cmtopx(1.75), top, left, bottom, right, "12", police, 12, haCenter, vaCenter, false, false, 1, clBlack , page1);
    						gprincipal->ReportText(gprincipal->cmtopx(11.646), gprincipal->cmtopx(hdt3+hsd*i), gprincipal->cmtopx(hl), gprincipal->cmtopx(2.5), top, left, bottom, right, "1000", police, 12, haCenter, vaCenter, false, false, 1, clBlack , page1);
    						gprincipal->ReportText(gprincipal->cmtopx(14.12), gprincipal->cmtopx(hdt3+hsd*i), gprincipal->cmtopx(hl), gprincipal->cmtopx(2), top, left, bottom, right, "0", police, 12, haCenter, vaCenter, false, false, 1, clBlack , page1);
    						gprincipal->ReportText(gprincipal->cmtopx(16.094), gprincipal->cmtopx(hdt3+hsd*i), gprincipal->cmtopx(hl), gprincipal->cmtopx(3.5), top, left, bottom, right, "12000", police, 12, haCenter, vaCenter, false, false, 1, clBlack , page1);
    						c_ligne++;
    						   }

    					if (n_ligne2 <= 25){  // nbre ligne <= 25
    						n_ligne2 = n_ligne2 - n_ligne2 + 1;//on laisse une ligne pour afficher à la page suivante
    					}else {  //nbre ligne > 25
    						n_ligne2 = n_ligne2 - 25; //on retire le nombre de ligne dessinnée
    					}
    					np++;
                        n_ligne3 = 0;
    				}else{

        			}
    		}
    	}
    //------------

    fichier->ShowReport(true);
	delete fichier;

*/
}
//---------------------------------------------------------------------------

