#include "get_fileinfo_from_path.h"

using namespace std;

FileInfo::FileInfo(string path){

	FilePath = path;
}
FileInfo::~FileInfo(){

}

void FileInfo::getFileinfoFromPath(){
	
	char drive[_MAX_DRIVE_];
	char dir[_MAX_DIR];
	char fname[_MAX_NAME_];
	char ext[_MAX_EXT_];

	_splitpath(FilePath.c_str(),drive,dir,fname,ext);
	
	Drive = (string)drive;
	Dir = (string)dir;
	Fname = (string)fname;
	Ext = (string)ext;
}

string FileInfo::getDrive(){
	return Drive;
}
string FileInfo::getDir(){
	return Dir;
}
string FileInfo::getFname(){
	return Fname;
}
string FileInfo::getExt(){
	return Ext;
}