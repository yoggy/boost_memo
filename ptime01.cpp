#include <iostream>

#include <boost/format.hpp>
#include <boost/date_time/posix_time/posix_time.hpp>

using boost::posix_time::ptime;

int main(int argc, char* argv[])
{
	boost::posix_time::ptime pt = boost::posix_time::second_clock::local_time();

	int h = pt.time_of_day().hours();
	int m = pt.time_of_day().minutes();
	int s = pt.time_of_day().seconds();

	std::cout << boost::format("%2d:%2d:%2d") % h % m % s << std::endl;

	return 0;
}

