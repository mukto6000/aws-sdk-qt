// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTADDONSREQUEST_H
#define QTAWS_LISTADDONSREQUEST_H

#include "eksrequest.h"

namespace QtAws {
namespace Eks {

class ListAddonsRequestPrivate;

class QTAWSEKS_EXPORT ListAddonsRequest : public EksRequest {

public:
    ListAddonsRequest(const ListAddonsRequest &other);
    ListAddonsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAddonsRequest)

};

} // namespace Eks
} // namespace QtAws

#endif
