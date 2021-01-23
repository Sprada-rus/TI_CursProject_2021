//---------------------------------------------------------------------------
#ifndef MainInterpolH
#define MainInterpolH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Grids.hpp>
#include <VCLTee.Chart.hpp>
#include <VclTee.TeeGDIPlus.hpp>
#include <VCLTee.TeEngine.hpp>
#include <VCLTee.TeeProcs.hpp>
#include <Buttons.hpp>
#include <Graphics.hpp>
#include <VCLTee.Series.hpp>
#include <Vcl.ComCtrls.hpp>
#include "cspin.h"

//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
    TPanel *Panel1;
	TChart *Chart1;
	TGroupBox *GroupBox1;
	TLabel *Label1;
	TImage *Image1;
	TBitBtn *BitBtn1;
	TBitBtn *BitBtn2;
	TLabel *Label2;
	TEdit *Edit1;
	TPanel *Panel3;
	TEdit *Edit2;
	TLabel *Label3;
	TLabel *Label4;
	TPointSeries *Series2;
	TLineSeries *Series1;
	TLineSeries *Series3;
	TLineSeries *Series4;
	TCSpinEdit *CSpinEdit1;
	TStringGrid *StringGrid1;
	TLabel *Label5;
	TEdit *Edit3;
	TLineSeries *Series5;
	void __fastcall BitBtn1Click(TObject *Sender);
	void __fastcall CSpinEdit1Change(TObject *Sender);
	void __fastcall BitBtn2Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	double k,n,d,r;
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
