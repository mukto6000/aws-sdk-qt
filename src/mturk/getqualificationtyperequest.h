// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETQUALIFICATIONTYPEREQUEST_H
#define QTAWS_GETQUALIFICATIONTYPEREQUEST_H

#include "mturkrequest.h"

namespace QtAws {
namespace MTurk {

class GetQualificationTypeRequestPrivate;

class QTAWSMTURK_EXPORT GetQualificationTypeRequest : public MTurkRequest {

public:
    GetQualificationTypeRequest(const GetQualificationTypeRequest &other);
    GetQualificationTypeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetQualificationTypeRequest)

};

} // namespace MTurk
} // namespace QtAws

#endif
