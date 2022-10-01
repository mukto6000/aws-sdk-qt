// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEIPSETREQUEST_H
#define QTAWS_CREATEIPSETREQUEST_H

#include "wafrequest.h"

namespace QtAws {
namespace Waf {

class CreateIPSetRequestPrivate;

class QTAWSWAF_EXPORT CreateIPSetRequest : public WafRequest {

public:
    CreateIPSetRequest(const CreateIPSetRequest &other);
    CreateIPSetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateIPSetRequest)

};

} // namespace Waf
} // namespace QtAws

#endif
