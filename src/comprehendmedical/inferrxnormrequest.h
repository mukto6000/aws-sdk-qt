// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_INFERRXNORMREQUEST_H
#define QTAWS_INFERRXNORMREQUEST_H

#include "comprehendmedicalrequest.h"

namespace QtAws {
namespace ComprehendMedical {

class InferRxNormRequestPrivate;

class QTAWSCOMPREHENDMEDICAL_EXPORT InferRxNormRequest : public ComprehendMedicalRequest {

public:
    InferRxNormRequest(const InferRxNormRequest &other);
    InferRxNormRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(InferRxNormRequest)

};

} // namespace ComprehendMedical
} // namespace QtAws

#endif
