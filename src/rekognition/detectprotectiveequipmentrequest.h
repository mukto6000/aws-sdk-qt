// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETECTPROTECTIVEEQUIPMENTREQUEST_H
#define QTAWS_DETECTPROTECTIVEEQUIPMENTREQUEST_H

#include "rekognitionrequest.h"

namespace QtAws {
namespace Rekognition {

class DetectProtectiveEquipmentRequestPrivate;

class QTAWSREKOGNITION_EXPORT DetectProtectiveEquipmentRequest : public RekognitionRequest {

public:
    DetectProtectiveEquipmentRequest(const DetectProtectiveEquipmentRequest &other);
    DetectProtectiveEquipmentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DetectProtectiveEquipmentRequest)

};

} // namespace Rekognition
} // namespace QtAws

#endif
