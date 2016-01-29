
// GraphicsDlg.h : header file
//

#pragma once


// CGraphicsDlg dialog
class CGraphicsDlg : public CDialogEx
{
// Construction
public:
	CGraphicsDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_GRAPHICS_DIALOG };
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
	int m_iTool;
	int m_iShape;
	int m_iColor;
	afx_msg void OnClickedBexit();
};
