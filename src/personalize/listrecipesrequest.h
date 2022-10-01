// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRECIPESREQUEST_H
#define QTAWS_LISTRECIPESREQUEST_H

#include "personalizerequest.h"

namespace QtAws {
namespace Personalize {

class ListRecipesRequestPrivate;

class QTAWSPERSONALIZE_EXPORT ListRecipesRequest : public PersonalizeRequest {

public:
    ListRecipesRequest(const ListRecipesRequest &other);
    ListRecipesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListRecipesRequest)

};

} // namespace Personalize
} // namespace QtAws

#endif
