//
// Created by flobe on 06/12/2024.
//

#ifndef FREIGHTWAGON_H
#define FREIGHTWAGON_H
#include "AbstractWagon.h"


namespace simasciitrain {

	class FreightWagon : public AbstractWagon {
	public:
		FreightWagon(int freightCount);
		virtual ~FreightWagon();

		void print(std::ostream &os) override;

		int getFreightCount() const;
		void setFreightCount(int freightCount);

	private:
		int freightCount_;
	};

}

#endif //FREIGHTWAGON_H
