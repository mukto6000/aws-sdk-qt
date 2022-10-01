// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYHOSTSRESPONSE_H
#define QTAWS_MODIFYHOSTSRESPONSE_H

#include "ec2response.h"
#include "modifyhostsrequest.h"

namespace QtAws {
namespace Ec2 {

class ModifyHostsResponsePrivate;

class QTAWSEC2_EXPORT ModifyHostsResponse : public Ec2Response {
    Q_OBJECT

public:
    ModifyHostsResponse(const ModifyHostsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ModifyHostsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyHostsResponse)
    Q_DISABLE_COPY(ModifyHostsResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
