// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTHITSFORQUALIFICATIONTYPEREQUEST_H
#define QTAWS_LISTHITSFORQUALIFICATIONTYPEREQUEST_H

#include "mturkrequest.h"

namespace QtAws {
namespace MTurk {

class ListHITsForQualificationTypeRequestPrivate;

class QTAWSMTURK_EXPORT ListHITsForQualificationTypeRequest : public MTurkRequest {

public:
    ListHITsForQualificationTypeRequest(const ListHITsForQualificationTypeRequest &other);
    ListHITsForQualificationTypeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListHITsForQualificationTypeRequest)

};

} // namespace MTurk
} // namespace QtAws

#endif
