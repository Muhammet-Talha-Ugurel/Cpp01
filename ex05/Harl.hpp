/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mugurel <mugurel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 02:20:05 by mugurel           #+#    #+#             */
/*   Updated: 2024/03/23 02:20:06 by mugurel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <map>

class Harl {
    private :
        void debug();
        void info();
        void warning();
        void error();
    
    public :
        void complain(std::string level);
};

typedef void (Harl::*complains)();