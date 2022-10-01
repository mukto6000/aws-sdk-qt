// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSOLUTIONSRESPONSE_H
#define QTAWS_LISTSOLUTIONSRESPONSE_H

#include "personalizeresponse.h"
#include "listsolutionsrequest.h"

namespace QtAws {
namespace Personalize {

class ListSolutionsResponsePrivate;

class QTAWSPERSONALIZE_EXPORT ListSolutionsResponse : public PersonalizeResponse {
    Q_OBJECT

public:
    ListSolutionsResponse(const ListSolutionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListSolutionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListSolutionsResponse)
    Q_DISABLE_COPY(ListSolutionsResponse)

};

} // namespace Personalize
} // namespace QtAws

#endif
