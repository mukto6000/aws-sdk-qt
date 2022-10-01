// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDTAGSTOCERTIFICATEREQUEST_H
#define QTAWS_ADDTAGSTOCERTIFICATEREQUEST_H

#include "acmrequest.h"

namespace QtAws {
namespace Acm {

class AddTagsToCertificateRequestPrivate;

class QTAWSACM_EXPORT AddTagsToCertificateRequest : public AcmRequest {

public:
    AddTagsToCertificateRequest(const AddTagsToCertificateRequest &other);
    AddTagsToCertificateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AddTagsToCertificateRequest)

};

} // namespace Acm
} // namespace QtAws

#endif
