// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELABELREQUEST_H
#define QTAWS_DESCRIBELABELREQUEST_H

#include "lookoutequipmentrequest.h"

namespace QtAws {
namespace LookoutEquipment {

class DescribeLabelRequestPrivate;

class QTAWSLOOKOUTEQUIPMENT_EXPORT DescribeLabelRequest : public LookoutEquipmentRequest {

public:
    DescribeLabelRequest(const DescribeLabelRequest &other);
    DescribeLabelRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeLabelRequest)

};

} // namespace LookoutEquipment
} // namespace QtAws

#endif
