#ifndef _GET_FILEINFO_FROM_PATH_H_
#define _GET_FILEINFO_FROM_PATH_H_

#include <stdlib.h>
#include <stdio.h>
#include <string>

#define _MAX_PATH_ 100
#define _MAX_DRIVE_ 20
#define _MAX_DIR_ 20
#define _MAX_NAME_ 50
#define _MAX_EXT_ 10

class FileInfo
{
public:
	FileInfo(std::string path);
	~FileInfo();

	void getFileinfoFromPath();

	std::string getDrive(); /*< ��ȡ�ļ��̷�*/
	std::string getDir(); /*< ��ȡ�ļ�·��*/
	std::string getFname(); /*< ��ȡ�ļ���*/
	std::string getExt(); /*< ��ȡ�ļ���չ��*/
protected:
private:
	std::string FilePath;
	std::string Drive;
	std::string Dir;
	std::string Fname;
	std::string Ext;
};

#endif