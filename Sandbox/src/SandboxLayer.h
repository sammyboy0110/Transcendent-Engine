#pragma once

#include <Transcendent-Engine.h>

class SandboxLayer : public TE::Layer
{
public:
	SandboxLayer();
	~SandboxLayer();

	virtual void OnAttach() override;
	virtual void OnDetach() override;

	virtual void OnUpdate() override;
	virtual void OnImGuiRender() override;

private:
	TE::Ref<TE::Shader> m_shader;
	TE::Ref<TE::VertexArray> m_VAO;
	TE::Ref<TE::VertexBuffer> m_VertexBuffer;
	TE::Ref<TE::IndexBuffer> m_IndexBuffer;
};
