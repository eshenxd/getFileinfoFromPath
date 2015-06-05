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

	std::string getDrive(); /*< 获取文件盘符*/
	std::string getDir(); /*< 获取文件路径*/
	std::string getFname(); /*< 获取文件名*/
	std::string getExt(); /*< 获取文件扩展名*/
protected:
private:
	std::string FilePath;
	std::string Drive;
	std::string Dir;
	std::string Fname;
	std::string Ext;
};

#endif