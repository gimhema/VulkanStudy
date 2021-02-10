#include "SPV_Converter.h"
#include <iostream>
#include <process.h>
#include <stdlib.h>


/*
glsl_command = C:/VulkanSDK/x.x.x.x/Bin32/glslc.exe shader.vert -o vert.spv
shader_vert_filename = vert.spv
shader_frag_filename = frag.spv
*/

SPV_Converter::SPV_Converter()
{
	


}

SPV_Converter::~SPV_Converter()
{
}

void SPV_Converter::GenerateVert()
{
	// _execl(glsl_command, vert_target_filepath, glsl_command_option, generated_vert_file_name, NULL);
	_popen("glslc.exe shader_depth.vert -o vert.spv", "r");
	// _execl(glsl_command_vert, NULL);
}

void SPV_Converter::GenerateFrag()
{
	 // _execl(glsl_command, frag_target_filepath, glsl_command_option, generated_frag_file_name, NULL);
	 _popen("glslc.exe shader_depth.frag -o frag.spv", "r");
	 //  _execl(glsl_command_frag, NULL);
}
