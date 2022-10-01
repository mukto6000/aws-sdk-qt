// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETHEMEREQUEST_H
#define QTAWS_CREATETHEMEREQUEST_H

#include "quicksightrequest.h"

namespace QtAws {
namespace QuickSight {

class CreateThemeRequestPrivate;

class QTAWSQUICKSIGHT_EXPORT CreateThemeRequest : public QuickSightRequest {

public:
    CreateThemeRequest(const CreateThemeRequest &other);
    CreateThemeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateThemeRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
