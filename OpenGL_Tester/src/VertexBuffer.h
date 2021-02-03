#pragma once

class VertexBuffer
{
private:
	unsigned int m_RendererID;	// id
public:
	VertexBuffer(const void* data, unsigned int size);	// constr
	~VertexBuffer();	//destr

	void Bind() const;
	void Unbind() const;
};