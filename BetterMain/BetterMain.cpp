#include <span>
#include <string_view>
#include <vector>
#include <array>
#include <iostream>

int main(int argc, char const* const* const argv)
{
	[[nodiscard]] int bettet_main(std::span<const std::string_view>) noexcept;

	std::array<std::string_view, 255> args;

	std::size_t arg_count =
		std::min(args.size(), static_cast<std::size_t>(argc));

	for (std::size_t arg = 0; arg < arg_count; ++arg) {
		args[arg] = std::string_view(
			*std::next(argv, static_cast<std::ptrdiff_t>(arg)));
	}

	return better_main(args);
}

[[nodiscard]] int better_main([[maybe_unused]] std::span<const std::string_view> args) noexcept
{
	for (const auto& arg : args) {
		std::cout << arg;
	}
	return 0;
}