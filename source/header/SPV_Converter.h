#pragma once
#include<string>


class SPV_Converter
{
public:
	SPV_Converter();
	~SPV_Converter();

	const char* generated_frag_file_path = "frag.spv";
	const char* generated_vert_file_path = "vert.spv";

	void GenerateVert();
	void GenerateFrag();

};

