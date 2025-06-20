/*
Copyright (c) 2025 RealTimeChris (Chris M.)

This file is part of software offered under a restricted-use license to a designated Licensee,
whose identity is confirmed in writing by the Author.

License Terms (Summary):
- Exclusive, non-transferable license for internal use only.
- Redistribution, sublicensing, or public disclosure is prohibited without written consent.
- Full ownership remains with the Author.
- License may terminate if unused for [X months], if materially breached, or by mutual agreement.
- No warranty is provided, express or implied.

Full license terms are provided in the LICENSE file distributed with this software.

Signed,
RealTimeChris (Chris M.)
2025
*/

#pragma once
#include <nihilus/common/memory_buffer.hpp>
#include <nihilus/common/common.hpp>

namespace nihilus {

	template<model_arch arch> struct arch_traits {};

	template<> struct arch_traits<model_arch::llama> {
	  protected:
	  public:
		using op_type_type = llama_op_types;
		static constexpr model_arch arch{ model_arch::llama };
		static constexpr uint64_t max_inputs{ 3 };
	};
}