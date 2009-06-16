#ifndef GenerationShader_H
#define GenerationShader_H

#include "Shader.h"


class GenerationShader : public Shader{
	
	
public:
	GenerationShader(float, GLuint, GLuint);
	~GenerationShader();
	void Enable();
	void Disable();

	//GLuint m_locSeed;
	//GLuint m_locPosition;
	GLuint m_locPermTexture;
	GLuint m_permTextureID;
	GLuint m_locPermGradTexture;
	GLuint m_permGradTextureID;
	//float m_seed;

	

};


#endif