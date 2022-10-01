// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTEMPLATESYNCSTATUSREQUEST_H
#define QTAWS_GETTEMPLATESYNCSTATUSREQUEST_H

#include "protonrequest.h"

namespace QtAws {
namespace Proton {

class GetTemplateSyncStatusRequestPrivate;

class QTAWSPROTON_EXPORT GetTemplateSyncStatusRequest : public ProtonRequest {

public:
    GetTemplateSyncStatusRequest(const GetTemplateSyncStatusRequest &other);
    GetTemplateSyncStatusRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetTemplateSyncStatusRequest)

};

} // namespace Proton
} // namespace QtAws

#endif
