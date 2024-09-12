#pragma once
# include "AForm.hpp"
# include <iostream>

class ShrubberyCreationForm : public AForm
{
	private:
		const std::string	_target;

	public:
		ShrubberyCreationForm(void);
		ShrubberyCreationForm(std::string const target);
		ShrubberyCreationForm(ShrubberyCreationForm const& that);
		~ShrubberyCreationForm(void);
		ShrubberyCreationForm&	operator=(ShrubberyCreationForm const& that);

		void	execute(Bureaucrat const& executor) const
			throw(GradeTooLowException, NotSignedException,
				std::ios_base::failure
			);
};
