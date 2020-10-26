#pragma once

#include "Transcendent-Engine/Renderer/RendererAPI.h"
#include "Platform/OpenGL/OpenGLVertexArray.h"

namespace TE {

	class RenderCommand
	{
	public:
		inline static void Init() {

			s_RendererAPI->Init();
		}

		inline static void SetViewport(uint32_t x, uint32_t y, uint32_t width, uint32_t height) {

			s_RendererAPI->SetViewport(x, y, width, height);
		}

		inline static void SetClearColor(const glm::vec4& color) {

			s_RendererAPI->SetClearColor(color);
		}

		inline static void Clear() {

			s_RendererAPI->Clear();
		}

		inline static void DrawIndexed(const Ref<VertexArray> VertexArray, size_t count = 0) {
			s_RendererAPI->DrawIndexed(VertexArray, count);
		}

	private:
		static Scope<RendererAPI> s_RendererAPI;
	};
}
