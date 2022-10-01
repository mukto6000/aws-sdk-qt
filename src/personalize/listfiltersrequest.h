// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFILTERSREQUEST_H
#define QTAWS_LISTFILTERSREQUEST_H

#include "personalizerequest.h"

namespace QtAws {
namespace Personalize {

class ListFiltersRequestPrivate;

class QTAWSPERSONALIZE_EXPORT ListFiltersRequest : public PersonalizeRequest {

public:
    ListFiltersRequest(const ListFiltersRequest &other);
    ListFiltersRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListFiltersRequest)

};

} // namespace Personalize
} // namespace QtAws

#endif
