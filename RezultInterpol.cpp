//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include "MainInterpol.h"
#include "RezultInterpol.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
	: TForm(Owner)
{
	Edit1->Text = Form1->n;
	Edit2->Text = FloatToStrF(Form1->k, ffGeneral, 4, 4);
	Edit3->Text = FloatToStrF(Form1->d, ffGeneral, 4, 4);
	Edit4->Text = FloatToStrF(Form1->r, ffGeneral, 4, 4);
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Button1Click(TObject *Sender)
{
    Form2->Close();
}
//---------------------------------------------------------------------------

