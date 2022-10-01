// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCOMPONENTSRESPONSE_H
#define QTAWS_LISTCOMPONENTSRESPONSE_H

#include "amplifyuibuilderresponse.h"
#include "listcomponentsrequest.h"

namespace QtAws {
namespace AmplifyUIBuilder {

class ListComponentsResponsePrivate;

class QTAWSAMPLIFYUIBUILDER_EXPORT ListComponentsResponse : public AmplifyUIBuilderResponse {
    Q_OBJECT

public:
    ListComponentsResponse(const ListComponentsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListComponentsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListComponentsResponse)
    Q_DISABLE_COPY(ListComponentsResponse)

};

} // namespace AmplifyUIBuilder
} // namespace QtAws

#endif
