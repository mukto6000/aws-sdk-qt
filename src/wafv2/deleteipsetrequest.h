// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEIPSETREQUEST_H
#define QTAWS_DELETEIPSETREQUEST_H

#include "wafv2request.h"

namespace QtAws {
namespace Wafv2 {

class DeleteIPSetRequestPrivate;

class QTAWSWAFV2_EXPORT DeleteIPSetRequest : public Wafv2Request {

public:
    DeleteIPSetRequest(const DeleteIPSetRequest &other);
    DeleteIPSetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteIPSetRequest)

};

} // namespace Wafv2
} // namespace QtAws

#endif
