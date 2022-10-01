// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEIMAGERECIPERESPONSE_H
#define QTAWS_DELETEIMAGERECIPERESPONSE_H

#include "imagebuilderresponse.h"
#include "deleteimagereciperequest.h"

namespace QtAws {
namespace ImageBuilder {

class DeleteImageRecipeResponsePrivate;

class QTAWSIMAGEBUILDER_EXPORT DeleteImageRecipeResponse : public ImageBuilderResponse {
    Q_OBJECT

public:
    DeleteImageRecipeResponse(const DeleteImageRecipeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteImageRecipeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteImageRecipeResponse)
    Q_DISABLE_COPY(DeleteImageRecipeResponse)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif
