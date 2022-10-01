// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMEMBERREQUEST_H
#define QTAWS_GETMEMBERREQUEST_H

#include "macie2request.h"

namespace QtAws {
namespace Macie2 {

class GetMemberRequestPrivate;

class QTAWSMACIE2_EXPORT GetMemberRequest : public Macie2Request {

public:
    GetMemberRequest(const GetMemberRequest &other);
    GetMemberRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetMemberRequest)

};

} // namespace Macie2
} // namespace QtAws

#endif
