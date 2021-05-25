#pragma once

#include "../stdafx.h"
inline auto Roboto = SDK::UObject::FindObject<SDK::UFont>("Font Roboto.Roboto");

namespace canvas {
	typedef void (*PostRender_t)(SDK::UObject* pObject, SDK::UCanvas* pCanvas);
	static inline PostRender_t RetPostRender;
	class render {
	public:

		inline void Circle(SDK::UCanvas* canvas, int x, int y, int radius, int numsides, SDK::FLinearColor color)
		{
			float Step = M_PI * 2.0 / numsides;
			int Count = 0;
			SDK::FVector2D V[128];
			for (float a = 0; a < M_PI * 2.0; a += Step)
			{
				float X1 = radius * define::MathamaticsLibrary->STATIC_Cos(a) + x;
				float Y1 = radius * define::MathamaticsLibrary->STATIC_Sin(a) + y;
				float X2 = radius * define::MathamaticsLibrary->STATIC_Cos(a + Step) + x;
				float Y2 = radius * define::MathamaticsLibrary->STATIC_Sin(a + Step) + y;
				V[Count].X = X1;
				V[Count].Y = Y1;
				V[Count + 1].X = X2;
				V[Count + 1].Y = Y2;
				canvas->K2_DrawLine(SDK::FVector2D({ V[Count].X, V[Count].Y }), SDK::FVector2D({ X2, Y2 }), 1.0f, color);
			}
		}


		class hud {
		public:
			inline void PostRender(SDK::UCanvas* pCanvas);
			void Hook();
		};
		hud* AHUD = new hud;

	};
	
	inline render* draw = new render;

}

