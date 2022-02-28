/*
** EPITECH PROJECT, 2022
** Project
** File description:
** Description
*/

#ifndef B_OOP_400_BER_4_1_TEKSPICE_NICOLAS_LATTEMANN_GENERICCOMPONENT_HPP
#define B_OOP_400_BER_4_1_TEKSPICE_NICOLAS_LATTEMANN_GENERICCOMPONENT_HPP

#include <string>
#include <vector>
#include <deque>
#include <unordered_map>
#include "../ILogicGate.hpp"
#include "../types.hpp"
#include "ParentComponent.hpp"

namespace nts
{
    class GenericComponent : public virtual ParentComponent
    {
        size_t _pin_no;

        std::vector<ILogicGate *> circuitry;

    public:

        GenericComponent(const std::string &type, const std::string &name);

        ~GenericComponent() override = default;

        void simulate(std::size_t tick) override;

        nts::Tristate compute(std::size_t pin) override;

        static ILogicGate *fetchGate(const std::string &type, const std::string &name);

        int findGateIndex(const std::string &name) const;
    };
}

#endif //B_OOP_400_BER_4_1_TEKSPICE_NICOLAS_LATTEMANN_GENERICCOMPONENT_HPP
