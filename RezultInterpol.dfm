object Form2: TForm2
  Left = 0
  Top = 0
  Caption = 'Form2'
  ClientHeight = 262
  ClientWidth = 377
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Panel1: TPanel
    Left = 0
    Top = 8
    Width = 647
    Height = 297
    TabOrder = 0
    object GroupBox1: TGroupBox
      Left = 8
      Top = 16
      Width = 361
      Height = 193
      Caption = 'GroupBox1'
      TabOrder = 0
      object Label1: TLabel
        Left = 63
        Top = 48
        Width = 107
        Height = 13
        Caption = #1055#1086#1088#1103#1076#1086#1082' '#1088#1077#1072#1094#1080#1080' N = '
      end
      object Label2: TLabel
        Left = 67
        Top = 67
        Width = 103
        Height = 13
        Caption = #1050#1086#1085#1089#1090#1072#1085#1090#1072' '#1089#1082#1086#1088#1086#1089#1090#1080
      end
      object Label3: TLabel
        Left = 116
        Top = 86
        Width = 54
        Height = 13
        Caption = #1044#1080#1089#1087#1077#1088#1089#1080#1103
      end
      object Label4: TLabel
        Left = 109
        Top = 105
        Width = 61
        Height = 13
        Caption = #1050#1086#1088#1088#1077#1083#1103#1094#1080#1103
      end
      object Edit1: TEdit
        Left = 176
        Top = 45
        Width = 121
        Height = 21
        TabOrder = 0
      end
      object Edit2: TEdit
        Left = 176
        Top = 64
        Width = 121
        Height = 21
        TabOrder = 1
      end
      object Edit3: TEdit
        Left = 176
        Top = 83
        Width = 121
        Height = 21
        TabOrder = 2
      end
      object Edit4: TEdit
        Left = 176
        Top = 102
        Width = 121
        Height = 21
        TabOrder = 3
      end
    end
    object Button1: TButton
      Left = 144
      Top = 224
      Width = 75
      Height = 25
      Caption = 'Ok'
      TabOrder = 1
      OnClick = Button1Click
    end
  end
end
