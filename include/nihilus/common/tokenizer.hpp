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

#include <nihilus/common/tokenizer.hpp>
#include <nihilus/common/config.hpp>
#include <iterator>

namespace nihilus {

	template<model_arch arch> struct tokenizer;

	template<> struct tokenizer<model_arch::llama> {
		NIHILUS_FORCE_INLINE tokenizer() noexcept = default;

		template<typename token_input_type> NIHILUS_FORCE_INLINE void tokenize(std::string_view, token_input_type*) {
			return;
		}
	};


}
