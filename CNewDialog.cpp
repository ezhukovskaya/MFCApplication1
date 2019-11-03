// CNewDialog.cpp: файл реализации
//

#include "pch.h"
#include "MFCApplication1.h"
#include "CNewDialog.h"
#include "afxdialogex.h"
#include "CNewDialog.h"


// Диалоговое окно CNewDialog

IMPLEMENT_DYNAMIC(CNewDialog, CDialogEx)

CNewDialog::CNewDialog(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_NEWDIALOG, pParent)
{

}

CNewDialog::~CNewDialog()
{
}

void CNewDialog::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_EDIT1, _Edit);
}


BEGIN_MESSAGE_MAP(CNewDialog, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &CNewDialog::OnBnClickedButton1)
END_MESSAGE_MAP()


// Обработчики сообщений CNewDialog


void CNewDialog::OnBnClickedButton1()
{
	CNewDialog nDialog;
	nDialog.DoModal();
	// TODO: добавьте свой код обработчика уведомлений
}


BOOL CNewDialog::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  Добавить дополнительную инициализацию
	_Edit.SetWindowTextW(str);
	return TRUE;  // return TRUE unless you set the focus to a control
				  // Исключение: страница свойств OCX должна возвращать значение FALSE
}
