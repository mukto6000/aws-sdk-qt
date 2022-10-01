// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCUSTOMDATAIDENTIFIERREQUEST_H
#define QTAWS_GETCUSTOMDATAIDENTIFIERREQUEST_H

#include "macie2request.h"

namespace QtAws {
namespace Macie2 {

class GetCustomDataIdentifierRequestPrivate;

class QTAWSMACIE2_EXPORT GetCustomDataIdentifierRequest : public Macie2Request {

public:
    GetCustomDataIdentifierRequest(const GetCustomDataIdentifierRequest &other);
    GetCustomDataIdentifierRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetCustomDataIdentifierRequest)

};

} // namespace Macie2
} // namespace QtAws

#endif
