// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETUSERDEFINEDFUNCTIONRESPONSE_H
#define QTAWS_GETUSERDEFINEDFUNCTIONRESPONSE_H

#include "glueresponse.h"
#include "getuserdefinedfunctionrequest.h"

namespace QtAws {
namespace Glue {

class GetUserDefinedFunctionResponsePrivate;

class QTAWSGLUE_EXPORT GetUserDefinedFunctionResponse : public GlueResponse {
    Q_OBJECT

public:
    GetUserDefinedFunctionResponse(const GetUserDefinedFunctionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetUserDefinedFunctionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetUserDefinedFunctionResponse)
    Q_DISABLE_COPY(GetUserDefinedFunctionResponse)

};

} // namespace Glue
} // namespace QtAws

#endif
