
// FileDownloaderMFCDlg.h : header file
//

#pragma once


// CFileDownloaderMFCDlg dialog
class CFileDownloaderMFCDlg : public CDialogEx
{
// Construction
public:
	CFileDownloaderMFCDlg(CWnd* pParent = nullptr);	// standard constructor

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_FILEDOWNLOADERMFC_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnEnChangeEdit1();
	CEdit m_editCtrl;
	afx_msg void OnBnClickedDownload();
	CProgressCtrl m_progress;
	CMFCEditBrowseCtrl FilePath;
};
