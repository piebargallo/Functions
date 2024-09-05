namespace lefticus {
	inline namespace v2_0_0 {
		struct Data
		{
			char c;
			int i;
			char c2;
		};

		int calculate_things(const Data&);
	} // namespace v2_0_0
} // namespace lefticus

int main()
{
	const lefticus::v2_0_0::Data some_data{};
	return lefticus::calculate_things(some_data);
}