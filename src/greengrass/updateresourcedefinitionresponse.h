// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERESOURCEDEFINITIONRESPONSE_H
#define QTAWS_UPDATERESOURCEDEFINITIONRESPONSE_H

#include "greengrassresponse.h"
#include "updateresourcedefinitionrequest.h"

namespace QtAws {
namespace Greengrass {

class UpdateResourceDefinitionResponsePrivate;

class QTAWSGREENGRASS_EXPORT UpdateResourceDefinitionResponse : public GreengrassResponse {
    Q_OBJECT

public:
    UpdateResourceDefinitionResponse(const UpdateResourceDefinitionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateResourceDefinitionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateResourceDefinitionResponse)
    Q_DISABLE_COPY(UpdateResourceDefinitionResponse)

};

} // namespace Greengrass
} // namespace QtAws

#endif
