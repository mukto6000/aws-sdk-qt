// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTPROJECTPOLICYREQUEST_H
#define QTAWS_PUTPROJECTPOLICYREQUEST_H

#include "rekognitionrequest.h"

namespace QtAws {
namespace Rekognition {

class PutProjectPolicyRequestPrivate;

class QTAWSREKOGNITION_EXPORT PutProjectPolicyRequest : public RekognitionRequest {

public:
    PutProjectPolicyRequest(const PutProjectPolicyRequest &other);
    PutProjectPolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutProjectPolicyRequest)

};

} // namespace Rekognition
} // namespace QtAws

#endif
