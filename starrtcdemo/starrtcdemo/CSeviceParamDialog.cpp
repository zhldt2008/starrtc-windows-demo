// CSeviceParamDialog.cpp: 实现文件
//

#include "stdafx.h"
#include "starrtcdemo.h"
#include "CSeviceParamDialog.h"
#include "afxdialogex.h"
#include "CLogin.h"

// CSeviceParamDialog 对话框

IMPLEMENT_DYNAMIC(CSeviceParamDialog, CDialogEx)

CSeviceParamDialog::CSeviceParamDialog(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG_SET_SERVER_PARAM, pParent)
{
	
}

CSeviceParamDialog::~CSeviceParamDialog()
{
}

void CSeviceParamDialog::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_EDIT_SETTING_USERID, m_UserIdEdit);
	DDX_Control(pDX, IDC_EDIT_SETTING_APPID, m_AgentIdEdit);
	DDX_Control(pDX, IDC_EDIT_SETTING_LOGIN_SERVICE, m_LoginServiceEdit);
	DDX_Control(pDX, IDC_EDIT_SETTING_MESSAGE_SERVICE, m_MessageServiceEdit);
	DDX_Control(pDX, IDC_EDIT_SETTING_CHAT_SERVICE, m_ChatServiceEdit);
	DDX_Control(pDX, IDC_EDIT_SETTING_UPLOAD__SERVICE, m_UploadServiceEdit);
	DDX_Control(pDX, IDC_EDIT_SETTING_DOWNLOAD_SERVICE, m_DownloadServiceEidt);
	DDX_Control(pDX, IDC_EDIT_SETTING_VOIP_SERVICE, m_VOIPServiceEdit);
	DDX_Control(pDX, IDC_COMBO_DISPATCH, m_DispatchCombox);
}


BEGIN_MESSAGE_MAP(CSeviceParamDialog, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON_SAVE_SYSTERM_SETTING, &CSeviceParamDialog::OnBnClickedButtonSaveSystermSetting)
END_MESSAGE_MAP()


// CSeviceParamDialog 消息处理程序


void CSeviceParamDialog::OnBnClickedButtonSaveSystermSetting()
{
	/*if (m_pUserManager != NULL)
	{
		CString str = "";
		m_UserIdEdit.GetWindowText(str);
		m_pUserManager->m_ServiceParam.m_strUserId = str;
		str = "";

		m_AgentIdEdit.GetWindowText(str);
		m_pUserManager->m_ServiceParam.m_strAgentId = str;
		str = "";

		m_LoginServiceEdit.GetWindowText(str);
		int pos = str.Find(":");	
		if (pos > 0)
		{
			m_pUserManager->m_ServiceParam.m_strLoginServiceIP = str.Left(pos);
			m_pUserManager->m_ServiceParam.m_nLoginServicePort = atoi(str.Right(str.GetLength() - pos - 1).GetBuffer(0));
		}
		else
		{
			m_pUserManager->m_ServiceParam.m_strLoginServiceIP = "";
			m_pUserManager->m_ServiceParam.m_nLoginServicePort = 0;

		}
		str = "";

		m_MessageServiceEdit.GetWindowText(str);
		pos = str.Find(":");
		if (pos > 0)
		{
			m_pUserManager->m_ServiceParam.m_strMessageServiceIP = str.Left(pos);
			m_pUserManager->m_ServiceParam.m_nMessageServicePort = atoi(str.Right(str.GetLength() - pos - 1).GetBuffer(0));
		}
		else
		{
			m_pUserManager->m_ServiceParam.m_strMessageServiceIP = "";
			m_pUserManager->m_ServiceParam.m_nMessageServicePort = 0;

		}
		str = "";

		m_ChatServiceEdit.GetWindowText(str);
		pos = str.Find(":");
		if (pos > 0)
		{
			m_pUserManager->m_ServiceParam.m_strChatServiceIP = str.Left(pos);
			m_pUserManager->m_ServiceParam.m_nChatServicePort = atoi(str.Right(str.GetLength() - pos - 1).GetBuffer(0));
		}
		else
		{
			m_pUserManager->m_ServiceParam.m_strChatServiceIP = "";
			m_pUserManager->m_ServiceParam.m_nChatServicePort = 0;

		}
		str = "";

		m_UploadServiceEdit.GetWindowText(str);
		pos = str.Find(":");
		if (pos > 0)
		{
			m_pUserManager->m_ServiceParam.m_strUploadServiceIP = str.Left(pos);
			m_pUserManager->m_ServiceParam.m_nUploadServicePort = atoi(str.Right(str.GetLength() - pos - 1).GetBuffer(0));
		}
		else
		{
			m_pUserManager->m_ServiceParam.m_strUploadServiceIP = "";
			m_pUserManager->m_ServiceParam.m_nUploadServicePort = 0;

		}
		str = "";

		m_DownloadServiceEidt.GetWindowText(str);
		pos = str.Find(":");
		if (pos > 0)
		{
			m_pUserManager->m_ServiceParam.m_strDownloadServiceIP = str.Left(pos);
			m_pUserManager->m_ServiceParam.m_nDownloadServicePort = atoi(str.Right(str.GetLength() - pos - 1).GetBuffer(0));
		}
		else
		{
			m_pUserManager->m_ServiceParam.m_strDownloadServiceIP = "";
			m_pUserManager->m_ServiceParam.m_nDownloadServicePort = 0;

		}
		str = "";

		m_VOIPServiceEdit.GetWindowText(str);
		pos = str.Find(":");
		if (pos > 0)
		{
			m_pUserManager->m_ServiceParam.m_strVOIPServiceIP = str.Left(pos);
			m_pUserManager->m_ServiceParam.m_nVOIPServicePort = atoi(str.Right(str.GetLength() - pos - 1).GetBuffer(0));
		}
		else
		{
			m_pUserManager->m_ServiceParam.m_strVOIPServiceIP = "";
			m_pUserManager->m_ServiceParam.m_nVOIPServicePort = 0;

		}
		str = "";

		int nIndex = m_DispatchCombox.GetCurSel();
		if (nIndex == 0)
		{
			m_pUserManager->m_bUserDispatch = false;
		}
		else
		{
			m_pUserManager->m_bUserDispatch = true;
		}
		CLogin login(m_pUserManager);
		login.writeConfig();
	}*/
	OnOK();
}


BOOL CSeviceParamDialog::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	/*if (m_pUserManager != NULL)
	{
		m_UserIdEdit.SetWindowText(m_pUserManager->m_ServiceParam.m_strUserId.c_str());
		m_AgentIdEdit.SetWindowText(m_pUserManager->m_ServiceParam.m_strAgentId.c_str());

		CString str = "";
		str.Format("%s:%d", m_pUserManager->m_ServiceParam.m_strLoginServiceIP.c_str(), m_pUserManager->m_ServiceParam.m_nLoginServicePort);
		m_LoginServiceEdit.SetWindowText(str);

		str.Format("%s:%d", m_pUserManager->m_ServiceParam.m_strMessageServiceIP.c_str(), m_pUserManager->m_ServiceParam.m_nMessageServicePort);
		m_MessageServiceEdit.SetWindowText(str);

		str.Format("%s:%d", m_pUserManager->m_ServiceParam.m_strChatServiceIP.c_str(), m_pUserManager->m_ServiceParam.m_nChatServicePort);
		m_ChatServiceEdit.SetWindowText(str);

		str.Format("%s:%d", m_pUserManager->m_ServiceParam.m_strUploadServiceIP.c_str(), m_pUserManager->m_ServiceParam.m_nUploadServicePort);
		m_UploadServiceEdit.SetWindowText(str);

		str.Format("%s:%d", m_pUserManager->m_ServiceParam.m_strDownloadServiceIP.c_str(), m_pUserManager->m_ServiceParam.m_nDownloadServicePort);
		m_DownloadServiceEidt.SetWindowText(str);

		str.Format("%s:%d", m_pUserManager->m_ServiceParam.m_strVOIPServiceIP.c_str(), m_pUserManager->m_ServiceParam.m_nVOIPServicePort);
		m_VOIPServiceEdit.SetWindowText(str);

		m_DispatchCombox.AddString("私有云");
		m_DispatchCombox.AddString("公有云");
		
		if (m_pUserManager->m_bUserDispatch)
		{
			m_DispatchCombox.SetCurSel(1);
		}
		else
		{
			m_DispatchCombox.SetCurSel(0);
		}
		
	}*/

	return TRUE;  // return TRUE unless you set the focus to a control
				  // 异常: OCX 属性页应返回 FALSE
}
