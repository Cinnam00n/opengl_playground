#pragma once

class IndexBuffer
{
private:
	unsigned int m_RendererID;	// id
	unsigned int m_Count;		// number of indices
public:
	IndexBuffer(const unsigned int* data, unsigned int count);	// constr
	~IndexBuffer();	//destr

	void Bind() const;
	void Unbind() const;

	inline unsigned int GetCount() const { return m_Count; }
};