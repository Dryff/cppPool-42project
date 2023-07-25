#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>
# include <cmath>

using std::cin;
using std::cout;
using std::endl;
using std::getline;
using std::string;

class Fixed
{
	private:
		int					_value;
		static const int	_bits = 8;

	public:

		Fixed();
		Fixed(int const i);
		Fixed(float const f);
		Fixed(Fixed const & src);
		~Fixed();

		Fixed &		operator=(Fixed const & rhs);
		bool		operator<(Fixed const & rhs);
		bool		operator<=(Fixed const & rhs);
		bool		operator>(Fixed const & rhs);
		bool		operator>=(Fixed const & rhs);
		bool		operator==(Fixed const & rhs);
		bool		operator!=(Fixed const & rhs);

		Fixed &		operator++();
		Fixed 		operator++(int);
		Fixed &		operator--();
		Fixed 		operator--(int);

		Fixed	operator*(const Fixed & rhs);
		Fixed	operator/(const Fixed & rhs);
		Fixed	operator+(const Fixed & rhs);
		Fixed	operator-(const Fixed & rhs);

		static Fixed & min(Fixed & a, Fixed & b);
		static const Fixed & min(const Fixed & a, const Fixed & b);
		static Fixed & max(Fixed & a, Fixed & b);
		static const Fixed & max(const Fixed & a, const Fixed & b);

		int 		getRawBits() const;
		void 		setRawBits(int const raw);
		float		toFloat() const;
		int			toInt() const;
};

std::ostream &			operator<<(std::ostream & o, Fixed const & i);


#endif