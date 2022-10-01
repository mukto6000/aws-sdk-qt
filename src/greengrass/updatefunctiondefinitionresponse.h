// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFUNCTIONDEFINITIONRESPONSE_H
#define QTAWS_UPDATEFUNCTIONDEFINITIONRESPONSE_H

#include "greengrassresponse.h"
#include "updatefunctiondefinitionrequest.h"

namespace QtAws {
namespace Greengrass {

class UpdateFunctionDefinitionResponsePrivate;

class QTAWSGREENGRASS_EXPORT UpdateFunctionDefinitionResponse : public GreengrassResponse {
    Q_OBJECT

public:
    UpdateFunctionDefinitionResponse(const UpdateFunctionDefinitionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateFunctionDefinitionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateFunctionDefinitionResponse)
    Q_DISABLE_COPY(UpdateFunctionDefinitionResponse)

};

} // namespace Greengrass
} // namespace QtAws

#endif
