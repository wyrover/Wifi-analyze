
// wlanDlg.h : ͷ�ļ�
//

#pragma once


// CwlanDlg �Ի���
class CwlanDlg : public CDialogEx
{
// ����
public:
	CwlanDlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
	enum { IDD = IDD_WLAN_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
	afx_msg void wifiquantity();
	afx_msg void disconnected();
	afx_msg void load();
	int m_quantity;
	CTreeCtrl m_display;
	CString m_State;
	afx_msg void OnBnClickedButton2();
	CString m_connectedssid;
	CString m_connectmac;
	int m_macquantity;
	CString m_phy;
	afx_msg void OnTimer(UINT_PTR nIDEvent);
	CString m_encryption;
	CString m_connectencryption;
	CString m_tixing;
	BOOL m_disconnect;
	afx_msg void OnBnClickedButton3();
	CTreeCtrl m_mistrustssid;
	afx_msg void OnBnClickedButton5();
	CString m_unssid;
	CTreeCtrl m_mistrustmac;
	CString m_unmac;

	afx_msg void OnBnClickedButton6();
};